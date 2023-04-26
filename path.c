#include "headerfile.h"

/**
 * get_path - function to get the path
 * @shll: the command line
 */

void get_path(char **shll)
{
	int i;
	char **tkn = NULL, *pth = strdup(getenv("PATH")), *tempr = NULL;

	tkn = str_break(pth, ":");
	free(pth);
	pth = NULL;
	for (i = 0; tkn[i]; i++)
	{
		tempr = (char *)malloc((strlen(tkn[i]) + strlen(shll[0]) + 2) *
				sizeof(char));
		strcpy(tempr, tkn[i]);
		strcat(tempr, "/");
		strcat(tempr, shll[0]);
		if (access(tempr, F_OK) == 0)
			break;

		free(tempr);
		tempr = NULL;
	}

	free_arr(tkn);
	free(shll[0]);
	shll[0] = tempr;
}
