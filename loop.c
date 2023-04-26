#include "headerfile.h"

/**
 * echo - function that loops the value input by user to be returned
 * @insrt: return value of isatty either 0 or 1
 */
void echo(int insrt)
{
	char *ln = NULL, **shll = NULL;
	size_t size = 0;
	int dst;
	struct stat shp;

	while (1)
	{
		if (insrt)
			write(STDOUT_FILENO, "$ ", 2);
		dst = getline(&ln, &size, stdin);
		if (dst == EOF)
		{
			free(ln);
			exit(0);
		}
		if (strcmp(ln, "\n") == 0)
			continue;
		shll = str_break(ln, " \t\r\n");
		_condns(shll, ln);
		if (strcmp(shll[0], "env") == 0)
		{
			prt_enve();
			free_arr(shll);
			continue;
		}
		if (stat(shll[0], &shp) != 0)
			get_path(shll);
		if (shll[0] == NULL)
		{
			printf("Command not found\n");
			free(ln);
			ln = NULL;
			free_arr(shll);
			shll = NULL;
			continue;
		}
		exec_cmd(shll);
		free_arr(shll);
	}
	free(ln);
}
