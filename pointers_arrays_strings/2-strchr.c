#include "main.h"
#include <stdio.h>

/**
 * _strchr - tuks
 * @s: var
 * @c: var
 *
 * Return: puntero
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
