#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchae(48);
		i = -i;
	}
	if (i / 10)
	{
		priny_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
