#include <stdio.h>

/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
if (j != 0)
putchar(',');
if (product < 10 && j != 0)
putchar(' ');
if (product < 10)
putchar('0' + product);
else
{
putchar('0' + product / 10);
putchar('0' + product % 10);
}
}
putchar('\n');
}
}
