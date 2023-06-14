#include "main.h"

/**
 * create_array - creates an array and initialized it with a specific character
 * @size: array size
 * @c: initialized character
 *
 * Return: pointer to the array o success  NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0 || buffer == NULL)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
