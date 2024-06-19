#include "main.h"
/**
 * print_numbers - imprime numeros del 0 al 9
 * Return: nada
 */
void print_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
