#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: Pointer to the name string.
 * @f: Function pointer that takes a char pointer as argument.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
