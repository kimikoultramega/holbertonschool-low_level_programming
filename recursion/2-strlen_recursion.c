#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - recursion
 * @s: variable
 * Return: (1 + _strlen_recursion(s + 1))
 *
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);/** Caso base, no tiene nada m√s para contar**/
	}
	return (1 + _strlen_recursion(s + 1));
}
