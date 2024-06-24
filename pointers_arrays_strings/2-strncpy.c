#include "main.h"
#include <stdio.h>

/**
 * _strncpy - hola1
 * @dest: dest
 * @src: src
 * @n: n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
