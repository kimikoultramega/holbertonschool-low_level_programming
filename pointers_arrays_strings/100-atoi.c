#include <stdio.h>

/**
 * _atoi - Convierte un string de caracteres en un entero.
 * @s: Puntero a la cadena de caracteres que se va a convertir.
 *
 * Esta función conviert el de caracteres apuntada por @s en un entero.
 * Ignora los caracteres no numéricos al principio y maneja signos + y -.
 *
 * Return: El valor entero convertido.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num != 0)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
