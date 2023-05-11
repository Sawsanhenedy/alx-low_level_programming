#include"main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integert
 * @value: square root
 * Return: integer
 */
int square(int n, int value);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - finds square root
 * @n: integer to find square root
 * @value: square root
 * Return: integer
 */
int square(int n, int value)
{
if (value * value == n)
return (value);
else if (value * value < n)
return (square(n, value + 1));
else
return (-1);
}
