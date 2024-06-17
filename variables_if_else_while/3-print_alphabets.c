#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to the variable n
 * and prints the last digit of n with a description.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char min = 'a';/*Variable para almacenar caracteres en minusculas*/
	char may = 'A';/*Variable para almacenar caracteres en mayusculas*/

	while (min <= 'z')
	{
	putchar(min);/*Imprime el valor actual de mi variable min*/
	min++;/*Aumenta gradualmente mi variable de uno en uno*/
	}
	while (may <= 'Z')/*En este caso comienza en A mayuscula*/
	{
	putchar(may);/*Imprime el valor actual de la variable may*/
	may++;/*Aumenta gradualmente mi variable*/
	}

	putchar('\n');/*salto de linea*/

	return (0);
}
