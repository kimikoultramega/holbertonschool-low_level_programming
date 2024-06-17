#include<stdio.h>
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
	/* Iteramos sobre todos los caracteres desde 'a' hasta 'z' */
	for (char c = 'a'; c <= 'z'; c++)
{
		/* Saltamos los caracteres 'q' y 'e' */
		if (c == 'q' && c == 'e')
{
			continue;
}
		/* Imprimimos el carácter actual */
		putchar(c);
}
	/* Imprimimos un salto de línea */
	putchar('\n');
	return (0);
}
