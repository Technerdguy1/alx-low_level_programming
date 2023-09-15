#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int fp;

	for (fp = 2; fp < x; fp++)
	{
		if (x % fp == 0)
		{
			x = x / fp;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
