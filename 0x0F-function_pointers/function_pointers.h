#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The string to be printed.
 * @f: Pointer to the function for printing the name.
 */
void print_name(char *name, void (*f)(char *));

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written; on error, -1.
 */
int _putchar(char c);

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which cmp returns non-zero,
 *         or -1 if no such element is found.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
