#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - A program that assign a random number 
 *Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	}else if (n == 0)
	{
		printf("is zero");
	}else
	{
		printf("is negative");
	}
	return (0);
}
