#include "headerfile.h"

/**
 * _puts - function that prints a string
 * @str: string to be print
 *
 * Return: number of characters that have been printed
 */

ssize_t _puts(char *str)
{
	ssize_t len = _strlen(str);

	return (write(STDOUT_FILENO, str, len));
}
