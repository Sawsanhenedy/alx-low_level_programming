#include"main.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: Array
 */
int **alloc_grid(int width, int height)
{
int **dop, a, b;
dop = malloc(sizeof(*dop) * height);
if (width <= 0 || height <= 0 || dop == 0)
{
return (NULL);
}
else
{
for (a = 0; a < height; a++)
{
dop[a] = malloc(sizeof(**dop) * width);
if (dop[a] == 0)
{
while (a--)
free(dop);
return (NULL);
}
for (b = 0; b < width; b++)
dop[a][b] = 0;
}
}
return (dop);
}
