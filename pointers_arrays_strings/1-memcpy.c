#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copia memoria
 * @dest: destino de memoria
 * @src: source
 * @n: number
 *
 * Return: retorna puntero
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
