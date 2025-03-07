#include "main.h"

/**
* puts2 - Prints every other character of a string.
* @str: The input string to be processed.
*
* Description: This function prints every other character of a given
* string, starting with the first character, followed by a new line.
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
