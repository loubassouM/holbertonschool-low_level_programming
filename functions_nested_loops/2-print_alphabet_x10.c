#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 10; i++)
_putchar(alphabet[i % 27]);
_putchar('\n');
}
