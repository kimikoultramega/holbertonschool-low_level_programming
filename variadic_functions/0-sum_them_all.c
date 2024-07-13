#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum_them_all
 * @n: n
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
