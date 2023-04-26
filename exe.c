#include "headerfile.h"

/**
 * exec_cmd - the funtion that executes a command
 * @shll: the command that will be executed
 */

void exec_cmd(char **shll)
{
	pid_t pd = 0;
	int i = 0;

	if (shll)
	{
		pd = fork();
		if (pd == -1)
		{
			perror("Error in fork");
			exit(EXIT_FAILURE);
		}
		else if (pd == 0)
		{
			if (execve(shll[0], shll, environ) == -1)
			{
				perror(shll[0]);
				exit(EXIT_FAILURE);
			}
			exit(EXIT_SUCCESS);
		}
		else
		{
			waitpid(pd, &i, 0);
		}
	}
}
