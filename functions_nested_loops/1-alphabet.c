#include "main.h"
#include <stdio.h>

/**
 *
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr = alphabet;

    while (*ptr)
        putchar(*ptr++);

    putchar('\n');
}
