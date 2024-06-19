#include "main.h"

/**
 * _isalpha - punto de entrada
 * @c: mi variable, en este caso un caracter.
 * Return: me devuelve 1 o 0
 */

int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
