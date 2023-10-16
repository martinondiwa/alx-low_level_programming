#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line
 * @str: The string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
