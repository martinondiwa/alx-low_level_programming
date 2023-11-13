#include "main.h"

/**
 * _strpbrk - Locates first string occurrence of any character in a set.
 * @s: The input string to search.
 * @accept: The set of characters to match.
 *
 * Return: A pointer to the first occurrence from @accept in @s,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
