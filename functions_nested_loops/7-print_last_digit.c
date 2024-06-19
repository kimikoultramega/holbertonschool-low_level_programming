#include "main.h"
/**
 * print_last_digit - Se encarga de imprimir el ultimo digito
 * @number: ya me falla la mente
 * Return: me regresa el numero impreso
 */
int print_last_digit(int number)
{
	number %= 10;

	if (number < 0)
		number *= -1;

	_putchar(number + '0');
	return (number);
}
