#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int c = 0;
while (x)
{
if (x & 1ul)
c++;
x = x >> 1;
}
return (c);
}
