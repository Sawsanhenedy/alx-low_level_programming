#include"main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char of intialize
 * Return: the pointer of intialized array or NULL
 */
char *create_array(unsigned int size, char c)
{
char *a = malloc(size);
if (size == 0 || a == 0)
return (0);
while (size--)
a[size] = c;
return (a);
}
