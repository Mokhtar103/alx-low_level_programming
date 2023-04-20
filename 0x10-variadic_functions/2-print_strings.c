#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  print strings
 * @separator: separator between strings
 * @n: number of arguments
 * @...: strings to be passed
 * Return: empty
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list myString;
unsigned int i;
char *str;

va_start(myString, n);

for (i = 0; i < n; i++)
{
str = va_arg(myString, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(myString);
}
