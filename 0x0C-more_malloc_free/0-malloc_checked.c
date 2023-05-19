#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of allocate
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
