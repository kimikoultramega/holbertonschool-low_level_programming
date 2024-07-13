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
    for (size_t i = 0; i < size; i++) {
        action(array[i]);  // Aplica la función action al elemento array[i]
    }
}
