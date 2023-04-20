#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  print numbers
 * @separator: separator between numbers
 * @n: number of arguments
 * @...: numbers to be passed
 * Return: empty
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(ap, int));

if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
