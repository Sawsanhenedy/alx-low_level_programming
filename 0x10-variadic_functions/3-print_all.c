#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_all - prints anything.
 * @format: types of arguments
 */
void print_all(const char * const format, ...)
{
int f = 0;
char *r, *s = "";
va_list l;
va_start(l, format);
if (format)
{
while (format[f])
{
switch (format[f])
{
case 'c':
printf("%s%c", s, va_arg(l, int));
break;
case 'i':
printf("%s%d", s, va_arg(l, int));
break;
case 'f':
printf("%s%f", s, va_arg(l, double));
break;
case 's':
r = va_arg(l, char *);
if (!r)
r = "(nil)";
printf("%s%s", s, r);
break;
default:
f++;
continue;
}
s = ",";
f++;
}
}
printf("\n");
va_end(l);
}
