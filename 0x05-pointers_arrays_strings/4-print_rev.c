#include"main.h"
/**
 * print_rev - printe reversed string followed by a new line
 * @s: pointer to be printed to the string
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
