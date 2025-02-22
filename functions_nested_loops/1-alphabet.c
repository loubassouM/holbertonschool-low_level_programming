#include "main.h"
#include <unistd.h>


void _putchar(char c);

/**
*
*
*
*/
void print_alphabet(void)

{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
write(1, alphabet, 27);

}
