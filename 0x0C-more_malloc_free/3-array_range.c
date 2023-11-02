#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers within a given range
* @min: Minimum value
* @max: Maximum value
*
* Return: Pointer to the newly created array
* If max is less than min, returns NULL
* If malloc fails, returns NULL
*/
int *array_range(int min, int max)
{
int *ar;
int i;

if (min > max)
return (NULL);

ar = malloc(sizeof(*ar) * ((max - min) + 1));
if (ar == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
ar[i] = min;

return (ar);
}


