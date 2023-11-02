#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: Size of memory to allocate (unsigned int)
*
* Return: Pointer to the allocated memory
*/
void *malloc_checked(unsigned int b);
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
