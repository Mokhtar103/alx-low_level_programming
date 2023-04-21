#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * char_format - character format
 * @separator: separator between strings
 * @all : argument pointer
 * Return: empty
 */
void char_format(char *separator, va_list all)
{
printf("%s%c", separator, va_arg(all, int));
}

/**
 * float_format - float format
 * @separator: separator between strings
 * @all : argument pointer
 * Return: empty
 */
void float_format(char *separator, va_list all)
{
printf("%s%f", separator, va_arg(all, int));
}

/**
 * string_format - string format
 * @separator: separator between strings
 * @all : argument pointer
 * Return: empty
 */
void string_format(char *separator, va_list all)
{
char *str = va_arg(all, char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s%s", separator, str);
}
}

/**
 * int_format -  integer format
 * @separator: separator between strings
 * @all : argument pointer
 * Return: empty
 */
void int_format(char *separator, va_list all)
{
printf("%s%d", separator, va_arg(all, int));
}

/**
 * print_all -  print anything
 * @format: format string
 * Return: empty
 */
void print_all(const char * const format, ...)
{
int i, j;
char *separator = "";
va_list all;
token tokens[] = {
{"c", char_format},
{"i", int_format},
{"f", float_format},
{"s", string_format},
{NULL, NULL}
};
va_start(all, format);
i = 0;
while (format && format[i])
{
j = 0;
while (tokens[j].token)
{
if (format[i] == tokens[j].token[0])
{
tokens[j].f(separator, all);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(all);
}
