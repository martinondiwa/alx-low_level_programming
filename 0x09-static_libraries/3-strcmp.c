#include "main.h"

/**
 * _strcmp - Compares the values of two strings.
 * @s1: The first string for comparison.
 * @s2: The second string for comparison.
 *
 * Returns difference between the ASCII values of first differing characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
