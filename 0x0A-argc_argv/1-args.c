#include <stdio.h>
#include "main.h"
/**
 * main - program that prints number of arguments
 * @argc: arguments count
 * @argv: array that conatin the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
(void)*argv;
printf("%d\n", argc - 1);
return (0);
}
