#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 10; i++)
{
_putchar(*alphabet);
_putchar('\n');
}
}
