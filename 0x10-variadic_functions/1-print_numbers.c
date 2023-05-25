#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - rints numbers, followed by a new line
 * @separator: string separates 2 numbers
 * @n: number of passed integers
 * @...: variable number printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list s;
unsigned int x;
va_start(s, n);
for (x = 0; x < n; x++);
{
printf("%d", va_arg(s, int));
if (x != (s - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
