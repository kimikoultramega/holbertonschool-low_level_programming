#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - check the code
 *
 * @str: puntero
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
