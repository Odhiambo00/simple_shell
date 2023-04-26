#include "headerfile.h"

/**
 * _condns - function that tests for built in commands
 * @shll: command line
 * @ln: variable for line of string
 */

void _condns(char **shll, char *ln)
{
	if (strcmp(shll[0], "exit") == 0)
	{
		free(ln);
		if (shll[1])
		{
			exit(atoi(shll[1]));
		}
		free_arr(shll);
		exit(0);
	}
}
