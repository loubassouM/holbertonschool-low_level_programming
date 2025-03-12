#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if malloc fails.
 */
char *_strdup(char *str)
{
char *dup;
int len = 0, i;
if (!str)
return (NULL);
while (str[len])
len++;
dup = malloc(len + 1);
if (!dup)
return (NULL);
for (i = 0; str[i]; i++)
dup[i] = str[i];
dup[i] = '\0';
return (dup);
}
