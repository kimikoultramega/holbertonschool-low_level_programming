#include "main.h"
#include <stdio.h>

/**
 * _strstr - str
 * @haystack: haystack
 * @needle: needle
 * Return: return
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)

		{
			h++;
			n++;
		}

	if (*n == '\0')
	{
		return (haystack);
	}
		haystack++;
	}
	return (NULL);
}
