#include "headerfile.h"

/**
 * str_break - function that parses a line of string
 * @ln: line of string to be parsed
 * @dlm: the delimiter that ln will be parsed with
 * Return: array of elements that have been parsed
 */

char **str_break(char *ln, char *dlm)
{
	char *Ptr = NULL, **shll = NULL;
	size_t i = 0;

	Ptr = strtok(ln, dlm);
	while (Ptr)
	{
		shll = _rllc(shll, ((i + 1) * sizeof(char *)));
		shll[i] = strdp(Ptr);
		Ptr = strtok(NULL, dlm);
		i++;
	}

	shll = _rllc(shll, ((i + 1) * sizeof(char *)));
	shll[i] = NULL;

	return (shll);
}
