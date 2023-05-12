#include<stdlib.h>
#include"main.h"
#include<stdio.h>
/**
 * main -prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: Success 0, error 1
 */
int main(int argc, char *argv[])
{
int n, a, res;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
res = 0;
if (n < 0)
{
printf("0\n");
return (0);
}
for (a = 0; a < 5 && n >= 0; a++)
while (n >= coins[a])
{
res++;
n -= coins[a];
}
}
printf("%d\n", res);
return (0);
}
