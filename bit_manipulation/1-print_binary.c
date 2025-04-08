#include "main.h"
#include <stdio.h>

/**
* print_binary - Prints the binary representation of a number
* @n: Unsigned long integer to convert to binary
*
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
while (mask > 0 && (n & mask) == 0)
mask >>= 1;
if (mask == 0)
putchar('0');
while (mask > 0)
{
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}
