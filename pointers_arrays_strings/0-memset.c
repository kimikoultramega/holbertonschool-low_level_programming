#include "main.h"
#include <stdio.h>

/**
 * _memset - one
 * @s: memoria
 * @b: memoria
 * @n: numeros
 *
 * Return: puntero
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
