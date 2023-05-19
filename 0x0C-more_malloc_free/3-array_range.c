#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: integer
 */
int *array_range(int min, int max)
{
int *s, f = 0;
if (min > max)
return (NULL);
s = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (s == NULL)
return (NULL);
while (min <= max)
{
s[f] = min;
f++;
min++;
}
return (s);
}
