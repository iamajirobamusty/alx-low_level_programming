#include "main.h"
/**
 * _strcat - concantenates two strings
 * @dest: input
 * @src: input
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, len1, len2, counter;

	len1 = 0;
	len2 = 0;
	for (i = 0; dest[i] < '\0'; i++)
		len1++;
	for (i = 0; src[i] < '\0'; i++)
		len2++;
	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];
	return (dest);
}
