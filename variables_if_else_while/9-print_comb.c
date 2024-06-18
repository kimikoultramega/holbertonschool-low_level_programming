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
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar(num + '0');
	if (num != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);

}
