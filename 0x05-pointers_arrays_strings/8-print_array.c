#include "main.h"

/**
 * print_array - Prints the elements of an array
 * @a: The array to be printed
 * @n: The number of elements to be printed
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
