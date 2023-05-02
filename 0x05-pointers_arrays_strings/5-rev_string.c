#include"main.h"
/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: Nothing
 */
void rev_string(char *s)
{
int o, i;
char numb;
for (o = 0; s[o] != '\0'; ++o)
;
for (i = 0; i < 1 / 2; ++i)
{
numb = s[i];
s[i] = s[o - 1 - i];
s[o - 1 - i] = numb;
}
}
