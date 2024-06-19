#include "main.h"
/**
 * print_sign - Entry point
 * @n: es mi variable
 * Return: 1 o 0 dependiendo de su valor positivo o negativo
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
