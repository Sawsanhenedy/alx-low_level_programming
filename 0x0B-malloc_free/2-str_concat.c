#include"main.h"
#include<stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int a, b;
char *c;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = b = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
c = malloc(sizeof(char) * (a + b + 1));
if (c == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
c[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
c[a] = s2[b];
a++, b++;
}
c[a] = '\0';
return (c);
}
