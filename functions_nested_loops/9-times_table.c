#include "main.h"
#include <stdio.h>

void times_table(void)
{
int i, j, prod;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
prod = i * j;
if (j == 0)
printf("%d", prod);
else
printf(", %2d", prod);
}
printf("\n");
}
}
