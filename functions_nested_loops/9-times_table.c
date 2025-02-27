#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int i = 0, j, prod;
while (i < 10)
{
j = 0;
while (j < 10)
{
prod = i * j;
if (j)
_putchar(','), _putchar(' '), (prod < 10) ? _putchar(' ') : 0;
if (prod >= 10)
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
j++;
}
_putchar('\n');
i++;
}
}
