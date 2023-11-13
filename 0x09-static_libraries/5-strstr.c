#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *current = haystack;
		char *pattern = needle;

		while (*current == *pattern && *pattern != '\0')
		{
			current++;
			pattern++;
		}

		if (*pattern == '\0')
			return (haystack);
	}

	return (NULL);
}
