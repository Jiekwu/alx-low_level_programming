#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes function on each element of an array
 * @array: The array
 * @size: Size of array
 * @action: Function to perform on each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
