#include "headerfile.h"

/**
 * prt_enve - function that prints the environment
 */

void prt_enve(void)
{
	char **c = environ;
	ssize_t i;

	while (*c)
	{
		i = write(STDOUT_FILENO, *c, strlen(*c));
		if (i == -1)
		{
			perror("write error");
			_exit(EXIT_FAILURE);
		}
		i = write(STDOUT_FILENO, "\n", 1);
		if (i == -1)
		{
			perror("write error");
			_exit(EXIT_FAILURE);
		}
		i++
	}
}
