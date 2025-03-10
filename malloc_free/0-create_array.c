#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars and initializes it with a char.
* @size: Size of the array
* @c: Character to initialize the array with
*
* Return: char pointer to malloc created memory address or NULL if error
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
return (NULL);
a = malloc(size * sizeof(*a));
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a [i] = c;
return (a);
}
