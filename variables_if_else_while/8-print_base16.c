#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 * followed by a new line using only putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
