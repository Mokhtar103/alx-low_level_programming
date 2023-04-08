#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiply two numbers
 * @argc: arguments count
 * @argv: array that conatin the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
int a, b;

if (argc == 3)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
printf("Error\n");
return (1);
}
