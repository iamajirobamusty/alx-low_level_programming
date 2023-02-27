#include "main.h"
/**
 * _puts - prints a string to standard output
 * @str: string to print
 */
voind _puts(char *str)
{
	while(*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
