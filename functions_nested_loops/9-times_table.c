#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int i, j, product;
char buffer[4];
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
if (j != 0)
write(1, ",", 1);
if (product < 10 && j != 0)
write(1, " ", 1);
if (product < 10)
{
buffer[0] = '0' + product;
write(1, buffer, 1);
}
else
{
buffer[0] = '0' + product / 10;
buffer[1] = '0' + product % 10;
write(1, buffer, 2);
}
}
write(1, "\n", 1);
}
}
