#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc: arguments count
 * @argv: array that conatin the arguments
 * Return: integer
 */
int main(int argc, char* argv[])
{
int i, result = 0;
unsigned int j;
char *c;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
c = argv[i];
for (j = 0; j < strlen(c); j++)
{
if (c[j] < 48 || c[j] > 57)
{
printf("Error\n");
return (1);
}
}
result += atoi(c);
c++;
}
printf("%d\n", result);
}
else
{
printf("0\n");
}
return (0);
}
