#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - Entry point
 * @a: first input
 * @size: second input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, x;
sum1 = 0;
sum2 = 0;
for (x = 0; x  < size; x++)
{
sum1 = sum1 + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
sum2 += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
