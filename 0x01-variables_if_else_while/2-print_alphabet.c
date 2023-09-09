#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description - assign a ramdom number to variable n each it's executed
 * Return: 0
 */
int main(void)
{
	char e = 'a';

	while (e <= 'z')
	{
		putchar(e);
		e++;
	}

	putchar('\n');
	return (0);
}
