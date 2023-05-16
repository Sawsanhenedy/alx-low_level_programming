#include"main.h"
/**
 * _strlen - length of string
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
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
int a = 0, b = 0, c = 0, d = 0;
char *e;
if (ac == 0 || av == NULL)
return (NULL);
for (; a = ac; a++, b++)
b += _strlen(av[a]);
e = malloc(sizeof(char) * b + 1);
if (e == 0)
return (NULL);
for (a = 0; a < ac; a++)
{
for (c = 0; av[a][c] != '\0'; c++, d++)
e[d] = av[a][c];
e[d] = '\n';
d++;
}
e[d] = '\0';
return (e);
}
