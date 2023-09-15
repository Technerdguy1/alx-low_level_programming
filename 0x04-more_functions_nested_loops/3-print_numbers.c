#include "main.h"

/**
 * print_numbers - prints numbers
 * Return:0
 */

void print_numbers(void)
{
	char e = 0;

	while (e <= 9)
	{
		_putchar('0' + e);
		e++;

	}
	_putchar('\n');

}
