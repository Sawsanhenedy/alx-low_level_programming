#include"main.h"
/**
 * _puts - prints the string followed by a new lineto stdout
 * @str: the string's parameter to be printed
 * Return: Nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
