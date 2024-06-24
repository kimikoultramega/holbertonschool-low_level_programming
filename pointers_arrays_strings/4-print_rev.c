#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: s
 */

void print_rev(char *s)
{
	int inicio;

	int b;

	for (inicio = 0; s[inicio] != '\0'; inicio++)
	{
	}
	for (b = inicio - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
