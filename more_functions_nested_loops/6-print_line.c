#include "main.h"
/**
 * print_line - betty me tenes re quemado
 * @n: muy quemado
 * Return: soreta
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
