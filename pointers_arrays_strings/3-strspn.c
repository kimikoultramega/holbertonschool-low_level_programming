#include "main.h"
#include "stdio.h"

/**
 * _strspn - ufa
 * @s: s
 * @accept: accept
 * Return: return
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
