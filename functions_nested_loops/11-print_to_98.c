#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
n = (n < 98) ? n + 1 : n - 1;
}
printf("98\n");
}
