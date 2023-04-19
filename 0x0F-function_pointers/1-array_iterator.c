#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the array as the parameters
 * on the element of array
 * @array: for array to iterative over
 * @size: print size of array
 * @action: pointer for printing the used function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
