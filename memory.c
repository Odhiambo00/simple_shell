#include "headerfile.h"

/**
 * _rllc - reallocatesd memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size of space allocated to ptr
 * @new_size: size of new memory block
 * Return: pointer to new allocated memory block
 */

void *_rllc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}

/**
 * strdp - function that duplicates a string
 * @str: string to be duplicated
 * Return: pointer to new allocated memory block
 */

char *strdp(char *str)
{
	char *new_str;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	new_str[len] = '\0';
	return (new_str);
}
