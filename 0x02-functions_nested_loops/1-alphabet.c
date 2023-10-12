#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * print_alphabet: prints alphabet 'a' to 'z' using the _putchar function.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
