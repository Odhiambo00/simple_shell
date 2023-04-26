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
		pd = vfork();

		if (pd == -1)
		{
			printf("Error in vfork\n");
		}
		else if (pd == 0)
		{
			if (execve(shll[0], shll, environ) == -1)
			{
				printf("%s: not found\n", shll[0]);
				_exit(EXIT_FAILURE);
			}
			_exit(EXIT_SUCCESS);
		}
		else
		{
			waitpid(pd, &i, 0);
		}
	}
}
