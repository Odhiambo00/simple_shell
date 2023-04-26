#include "headerfile.h"

/**
 * prt_enve - function that prints the environment
 */

void prt_enve(void)
{
	char **c = environ;

	for (; *c; c++)
		_puts(*c), _puts("\n");
}
