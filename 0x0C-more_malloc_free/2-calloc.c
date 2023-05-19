#include"main.h"
#include<stdlib.h>
/**
 * calloc - allocates memory for an array, using malloc
 * @nmemb: member's number
 * @size: size
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int f = 0, d = 0;
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
d = nmemb * size;
s = malloc(d);
if (s == NULL)
return (NULL);
while (f < d)
{
s[f] = 0;
f++;
}
return (s);
}
