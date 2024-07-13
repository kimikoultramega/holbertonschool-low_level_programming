#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - array
 * @array: ptr al array
 * @size: numero de elementos en el array
 * @action: ptr a funcion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t t;

	for (t = 0; t < size; t++)
	{
        action(array[t]);
	}
}
