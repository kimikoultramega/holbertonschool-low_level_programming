#include "main.h"
/**
 * _abs - tranforma el valor en un valor absoluto
 * @number: mi variable numero
 * Return: devuelve 0
 */
int _abs(int number)
{
	if (number < 0)
		return (number * -1);
	else
		return (number);
}
