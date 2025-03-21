#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything (char, int, float, string)
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, printed = 0;
char *s;
va_start(args, format);
while (format && format[i])
{
if (printed && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
printed = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
printed = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
printed = 1;
break;
case 's':
s = va_arg(args, char *);
printf("%s", s ? s : "(nil)");
printed = 1;
break;
}
i++;
}
va_end(args);
printf("\n");
}
