#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - funcion.
 * @str: string
 * Return: new_string
 *
 *
 *
 */

char *_strdup(char *str)
{
	int i;
	int longitud = 0;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[longitud] != '\0')
	{
		longitud++;
	}

	new_string = (char *)malloc((longitud + 1) + sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longitud; i++)
	{
		new_string[i] = str[i];
	}
	new_string[longitud] = '\0';

	return (new_string);

}
