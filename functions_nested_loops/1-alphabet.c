#include "main.h"
#include <unistd.h>

/**
*
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
write(1, &c, 1);
}
write(1, "\n", 1);
}
