#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The input string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
