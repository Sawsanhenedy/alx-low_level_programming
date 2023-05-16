#include"main.h"
/**
 * cntwrd - counts in string the number of words
 * @s: counted string
 * Return: integer (number of words)
 */
int cntwrd(char *s)
{
int a, b = 0;
for (a = 0; s[a]; a++)
{
if (s[a] == ' ')
{
if (s[a + 1] != ' ' && s[a + 1] != '\0')
b++;
}
else if (a == 0)
b++;
}
b++;
return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to be splited
 * Return: pointer of string's array
 */
char **strtow(char *str)
{
int a, b, c, d, e = 0;
int f = 0;
char **g;
if (str == NULL || *str == '\0')
return (NULL);
e = cntwrd(str);
if (e == 1)
return (NULL);
g = (char **)malloc(e *sizeof(char *));
if (g == NULL)
return (NULL);
g[e - 1] = NULL;
a = 0;
while (str[a])
{
if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
{
for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
;
b++;
g[f] = (char *)malloc(b *sizeof(char));
b--;
if (g[f] == NULL)
{
for (c = 0; c < f; c++)
free(g[c]);
free(g[e - 1]);
free(g);
return (NULL);
}
for (d = 0; d < b; d++)
g[f][d] = str[a + d];
g[f][d] = '\0';
f++;
a += b;
}
else
a++;
}
return (g);
}
