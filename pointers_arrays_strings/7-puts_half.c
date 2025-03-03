#include <stdio.h>

/**
 * puts_half - prints the second half of a string.
 * @str: The string to be printed.
 *
 * If the string length is odd, the function prints the last
 * (length_of_string + 1) / 2 characters. If the string length is even,
 * it prints the last length_of_string / 2 characters.
 */
void puts_half(char *str)
{
int len = 0;
int start;
int i;
{
while (str[len] != '\0')
len++;
{
if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;
}
for (i = start; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');
}
}
