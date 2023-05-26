#include"3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
int (*f)(int, int), a, b;
if (argc != 4)
printf("Error\n");
exit(98);
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
printf("Error\n");
exit(99);
if (!b && (argv[2][0]) == '/' || (argv[2][0] == '%'))
printf("Error\n");
exit(100);
printf("%d\n", f(a, b));
return (0);
}
