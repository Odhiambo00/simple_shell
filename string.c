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

/**
 * _strcmp - function that compares two strings
 * @str1: string 1
 * @str2: string 2
 * Return: 0 if strings are equal if not the difference
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

/**
 * _strcmp2 - compares 2 strings
 * @str1: string 1
 * @str2: string 2
 * Return: 0 if strings are equal else the difference
 */

int _strcmp2(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
