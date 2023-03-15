#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s2: a string to concatenate
 * @s1: a string to concatenate
 *
 * Return: a pointer, NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	sum = malloc(sizeof(char) * (i + j + 1));
	if (sum == NULL)
		return (NULL);
	i = j = 0;
	for (; s1[1] != '\0'; i++)
		sum[i] = s1[i];
	for (; s2[j] != '\0'; j++)
	{
		sum[i] = s2[j];
		i++;
	}
	sum[i] = '\0';
	return (sum);
}
