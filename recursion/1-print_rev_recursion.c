#include "main.h"

/**
 * _print_rev_recursion - pimba
 * @s: variable
 *
 *
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;/** Caso base, llega al final de la cadena*/
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
