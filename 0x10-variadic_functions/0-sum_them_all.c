#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameters number
 * @...: variable parameter number
 * Return: 0 or the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list p;
unsigned int f, sum = 0;
va_start(p, n);
for (f = 0; f < n; f++)
sum += va_arg(p, int);
va_end(p);
return (sum);
}
