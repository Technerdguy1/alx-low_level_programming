#include <string.h>
#include "main.h"

/**
 * _strncpy - Copies 1 string into another
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: integer n, number or size of strings to copy
 *
 * Return: pointer to string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
