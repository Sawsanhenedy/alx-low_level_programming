#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int b, c, d;
for (b = 0, c = (n - 1); b < c; b++)
c--;
{
d = a[b];
a[b] = a[c];
a[c] = d;
}
}
