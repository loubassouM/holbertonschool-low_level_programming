#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @args: The argument list
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: The argument list
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: The argument list
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: The argument list
 */
void print_string(va_list args)
{
char *s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
}

/**
 * print_all - Prints anything (char, int, float, string)
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
void (*funcs[4])(va_list) = {print_char, print_int,
print_float, print_string};
char specifiers[] = {'c', 'i', 'f', 's'};
va_start(args, format);
while (format && format[i])
{
int j = 0;
while (j < 4)
{
if (format[i] == specifiers[j])
{
if (printed)
printf(", ");
funcs[j](args);
printed = 1;
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
