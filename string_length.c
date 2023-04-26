#include "headerfile.h"

/**
 * _strlen - funtion that prints the length of a given string
 * @s: string whose length is to be found
 *
 * Return: length of string
 */

ssize_t _strlen(char *s)
{
	ssize_t len = 0;

	while (s && *(s + len))
		len++;

	return (len);
}
