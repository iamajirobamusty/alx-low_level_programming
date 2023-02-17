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

printf("The size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("The size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("The size of ilong: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("The size of long long: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
