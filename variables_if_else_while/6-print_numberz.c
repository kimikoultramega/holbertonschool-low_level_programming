#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)

{
	putchar(i);
	putchar(10);
}
	return (0);
}
