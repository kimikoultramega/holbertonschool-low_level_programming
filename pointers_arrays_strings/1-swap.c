#include "main.h"
#include <stdio.h>

/**
 * swap_int - void swap_int
 *
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
