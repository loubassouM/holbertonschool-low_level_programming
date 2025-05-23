#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary string to an unsigned integer.
*@b: Pointer to a string of '0' and '1' characters.
*
* Return: The converted unsigned integer, or 0 if:
*         - The string contains invalid characters (not '0' or '1').
*         - The input string `b` is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return (0);
result = (result << 1) | (*b - '0');
}
return (result);
}
