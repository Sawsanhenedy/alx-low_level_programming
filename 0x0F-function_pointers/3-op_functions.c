#include"3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - the sum of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - substracts 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: substraction
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - the multiplication of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - the division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the division
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - the remainder of the division of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
return (a % b);
}
