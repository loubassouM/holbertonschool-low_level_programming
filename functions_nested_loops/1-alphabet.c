#include "main.h"
#include <unistd.h>

void _putchar(char c);

/**
 *
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    write(1, alphabet, 27);
    _putchar('\n');
}
