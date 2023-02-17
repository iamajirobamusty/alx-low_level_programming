#include <stdio.h>
/**
 * main - A program that print the sizes of its intrinsic types
 * Return: 0 (sucess)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int t;
	float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
