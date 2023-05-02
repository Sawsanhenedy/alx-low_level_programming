#include "main.h"
/**
 * swap_int - swapes the value of two integers using
 * two input parameters
 * @a: first input parameter
 * @b: second input parameter
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int numb;
numb = *a;
*a = *b;
*b = numb;
}
