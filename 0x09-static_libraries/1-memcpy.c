#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from source to destination.
 * @dest: The memory area where data is stored.
 * @src: The memory area from which data is copied.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
