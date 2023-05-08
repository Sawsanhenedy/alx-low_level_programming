#include"main.h"
/**
 * _strpbrk - Entry point
 * @s: first input
 * @accept: second input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
