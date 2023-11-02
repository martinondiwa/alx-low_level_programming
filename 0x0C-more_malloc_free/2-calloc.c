#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array
* @nmemb: Number of elements
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory
* If nmemb or size is 0, returns NULL
* If malloc fails, returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
p[i] = 0;

return (p);
}
