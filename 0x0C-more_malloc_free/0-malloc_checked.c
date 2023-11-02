#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - Allocates memory using malloc
* @b: Number of bytes to allocate
*
* Return: Pointer to the allocated memory
* If malloc fails, the status value is set to 98.
*/
void *malloc_checked(unsigned int b)
{
char *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}


