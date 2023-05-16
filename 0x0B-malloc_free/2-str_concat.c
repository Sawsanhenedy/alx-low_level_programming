#include"main.h"
/**
 * _strlen - find length of string
 * @a: string
 * Return: int
 */
int _strlen(char *a)
{
int size = 0;
for (; a[size] != '\0'; size++)
;
return (size);
}
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int fsize, ssize, b;
char *c;
if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
fsize = _strlen(s1);
ssize = _strlen(s2);
c = malloc((fsize + ssize) *sizeof(char) + 1);
if (c == 0)
return (0);
for (b = 0; b <= fsize + ssize; b++)
{
if (b < fsize)
c[b] = s1[b];
else
c[b] = s2[b - fsize];
}
c[b] = '\0';
return (c);
}
