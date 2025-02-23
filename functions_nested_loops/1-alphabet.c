#include "main.h"
#include <unistd.h>

/**
 *
 *
 *
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
write(1, &letter, 1);
}
write(1, "\n", 1);
return (0);
}
