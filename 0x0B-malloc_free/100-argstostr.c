#include"main.h"
#include<stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int a, b, c = 0, d = 0;
char *e;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
d++;
}
d += ac;
e = malloc(sizeof(char) * d + 1);
if (e == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
e[c] = av[a][b];
c++;
}
if (e[c] == '\0')
{
e[c++] = '\n';
}
}
return (e);
}
