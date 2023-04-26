#include "headerfile.h"

/**
 * my_atoi - function which converts string to an integer
 * @str: string to be converted
 * Return: integer valueof str
 */

int my_atoi(char *str)
{
	int res = 0, sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
	{
		if (str[i] < '0' || str[i] > '9')
			break;
		res = res * 10 + str[i] - '0';
	}
	return (sign * res);
}
