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
int i = 0, b = 0, c = 0, d = 0;
char *e;
if (ac == 0 || av == NULL)
return (NULL);
for (; i = ac; i++, b++)
b += _strlen(av[i]);
e = malloc(sizeof(char) * b + 1);
if (e == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (c = 0; av[i][c] != '\0'; c++, d++)
e[d] = av[i][c];
e[d] = '\n';
d++;
}
e[d] = '\0';
return (e);
}
