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
	if (c == '\0')
	{
		return (s);
	}

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
