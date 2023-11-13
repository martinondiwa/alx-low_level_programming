#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Starting address of the memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: Number of bytes to be changed.
 *
 * Return: A pointer to the memory area @s with new values for @n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}

	return (s);
}
