#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase
*/
void print_alphabet_x10(void)
{
int i; int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar('a' + j);
}
_putchar('\n');
}
}
