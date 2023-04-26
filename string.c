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

/**
 * _strcpy - function that copies a string from sce to dstn
 * @dstn: new string
 * @sce: original string
 * Return: pointer to dstn
 */

char *_strcpy(char *dstn, char *sce)
{
	int i;

	for (i = 0; sce[i] != '\0'; i++)
		dstn[i] = sce[i];
	dstn[i] = '\0';
	return (dstn);
}

/**
 * append_str - function that appends two strings
 * @dstn: new string
 * @sce: original string
 *
 * Return: pointer to the joined string
 */

char *append_str(char *dstn, const char *sce)
{
	int dstn_len = 0;
	int i = 0;

	while (dstn[dstn_len] != '\0')
		dstn_len++;

	while (sce[i] != '\0')
	{
		dstn[dstn_len] = sce[i];
		dstn_len++;
		i++;
	}
	dstn[dstn_len] = '\0';

	return (dstn);
}
