#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints each element of an array on a new line.
 * @array: The array of integers.
 * @size: The number of elements to print.
 * @action: Pointer to a function for printing in regular or hex format.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
