#include "headerfile.h"

/**
 * free_arr - function that frees an array
 * @arr: array to be freed
 */

void free_arr(char **arr)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		free(arr[i]);
		arr[i] = NULL;
	}
	free(arr);
	arr = NULL;
}

/**
 * main - function description
 * Return: 0
 */

int main(void)
{
	signal(SIGINT, sgt_Handler);
	echo(isatty(STDIN_FILENO));

	return (0);
}
