#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)

{
	putchar((i % 10) + '0');
}
	putchar('\n');
	return (0);
}
