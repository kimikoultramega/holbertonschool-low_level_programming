#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - check the code
 *
 * @s: s
 */

void print_rev(char *s)
{
	int larstring = strlen(s);/* Obtengo el largo de la cadena */
	int i;/* Declaro una variable del tipo int para i */

	for (i = larstring - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
