#include "main.h"

/**
 * cap_string - cap_string
 * @str: o
 * Return: return
 */

char *cap_string(char *str)
{
	int i, capitalize = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
			capitalize = 1;
		else
			capitalize = 0;
	}
	return (str);
}
