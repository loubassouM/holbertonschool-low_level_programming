#include "main.h"
#include <unistd.h>

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
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
