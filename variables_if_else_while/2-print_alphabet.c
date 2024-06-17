#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:(0)
 */

int main(void)
{

	char alpha = 'a';/*Establezco la variable e inicio en a*/

	while (alpha <= 'z')
	{
		putchar(alpha);/*Imprime el caracter actual*/
		alpha++; /*incrementa el caracter al siguiente en ASCII*/
	}

	putchar('\n');
	return (0);
}
