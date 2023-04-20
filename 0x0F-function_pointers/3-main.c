#include "3-calc.h"

/**
 * main - check code for functions
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int (*op)(int, int);
int a, b;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op = get_op_func(argv[2]);

if (!op)
{
printf("Error\n");
exit(99);
}
if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", op(a, b));
return (0);
}
