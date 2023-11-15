#include "function_pointers.h"

/**
 * int_index - Returns index of 1st  element for a true comparison else -1.
 * @array: The array of integers.
 * @size: The size of elements in the array.
 * @cmp: Pointer to a function used for comparison (one of the three in main).
 *
 * Return: Index of first element for which cmp returns true.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
