#include "main.h"

/**
 * _strcmp - strcmp
 * @s1: s1
 * @s2: s2
 * Return: 0
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-*s2);
	}
	if (*s1 != '\0' && *s2 == '\0')
	{
		return (*s1);
	}
	return (0);
}
