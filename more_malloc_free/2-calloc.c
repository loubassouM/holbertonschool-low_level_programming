#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocates memory for an array using malloc
* @nmemb: Number of elements
*@size: Size of each element in bytes
* Return: Pointer to allocated memory or NULL if failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
if (nmemb && size > (size_t)-1 / nmemb)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
