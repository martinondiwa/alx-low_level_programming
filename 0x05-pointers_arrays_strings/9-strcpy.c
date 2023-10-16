#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination string to copy to
 * @src: The source string to copy from
 * Return: The copied string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for (; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
