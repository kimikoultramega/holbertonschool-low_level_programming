#include "main.h"
/**
 * print_diagonal - dale betty
 * @n: zzzzzzzz
 * Return: None
 */
void print_diagonal(int n)
{
	int counter = 0;
	int counter2;

	if (n <= 0)
		_putchar('\n');
	if (n > 0)
	{
		while (n > 0)
		{
			if (counter == 0)
			{
				_putchar('\\');
				_putchar('\n');
				counter++;
				n--;
			} else
			{
				while (n > 0)
				{
					for (counter2 = 0; counter2 < counter; counter2++)
					{
						_putchar(' ');
					}
					_putchar('\\');
					_putchar('\n');
					counter++;
					n--;
				}
			}
		}
	}
}
