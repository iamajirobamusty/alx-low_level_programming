#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a funtion to duplicate a stirng to a new location
 * @str: string to duplicate
 *
 * Return: a pointer, NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] ; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
