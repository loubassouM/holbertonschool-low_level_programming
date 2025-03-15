#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*_calloc - Allocates memory for an array using malloc
*@nmemb: Number of elements
*@size: Size of each element in bytes
* Return: Pointer to allocated memory or NULL if failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (!ptr)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;
return (ptr);
}
