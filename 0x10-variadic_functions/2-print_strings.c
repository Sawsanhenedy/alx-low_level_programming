#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string separates 2 numbers
 * @n: number of passed integers
 * @...: variable number printed
 * Description: separator = NULL -> no print
 * one strin = NULL -> print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *r;
unsigned int x;
va_start(s, n);
for (x = 0; x < n; x++)
{
r = va_arg(s, char *);
if (r == NULL)
printf("(nil)");
else
printf("%s", r);
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
