#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha; /*Defino mi variable alpha*/

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);/*mi variable alfa est� siendo escrita*/
	}
	putchar('\n');
	return (0);
}
