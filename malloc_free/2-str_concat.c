#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - str_concat
 * Return: new string
 * @s1: string
 * @s2: string
 */
char *str_concat(char *s1, char *s2)
{
	int len_s2;
	int len_s1;
	char *new_string;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
	}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{
	}
	new_string = malloc(len_s1 + len_s2 + 1 * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		new_string[len_s1 + j] = s2[j];
	}
	new_string[len_s1 + len_s2] = '\0';
	return (new_string);
}
