#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: integer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int f = 0, r = 0, d = 0, z = 0;
char *srg;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[f])
f++;
while (s2[d])
d++;
if (n >= d)
z = f + d;
else
z = f + n;
srg = malloc(sizeof(char) * z + 1);
if (srg == NULL)
return (NULL);
d = 0;
while (r < z)
{
if (r <= f)
srg[r] = s1[r];
if (r >= f)
{
srg[r] = s2[d];
d++;
}
r++;
}
srg[r] = '\0';
return (srg);
}
