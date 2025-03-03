#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
int i, len = 0;
while (str[len] != '\0')
len++;
printf("Length: %d\n", len);
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
