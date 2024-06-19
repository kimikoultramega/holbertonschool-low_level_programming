#include "main.h"
/**
 * _isupper - chequea
 * @c: - variable
 * Return: 1 o 0 segun el resultado
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	} else
		return (0);
}
