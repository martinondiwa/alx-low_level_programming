#include "search_algos.h"
/**
 * binary_search - search for value using binary search
 * @array: pointer to the first element of array
 * @size: number of element in array
 * @value: value to search for in array
 * Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, r, l;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
