#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the arguments
 * @argc: arguments count
 * @argv: array that conatin the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
