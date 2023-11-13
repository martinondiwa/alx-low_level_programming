#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string to be checked.
 * @accept: The string containing characters to match in the prefix.
 *
 * Return: The number of bytes in the initial segment of @s that consists
 * of only the bytes found in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				count++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (count);
		}
		s++;
	}

	return (count);
}
