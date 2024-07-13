#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - index
 * @array: arr
 * @size: size
 * @cmp: cmp
 * Return: Return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
		{
			return (r);
		}
	}
	return (-1);
}
