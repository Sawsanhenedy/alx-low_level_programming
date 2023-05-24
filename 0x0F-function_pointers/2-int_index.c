#include"function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements
 * @cmp: function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int f;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (f = 0; f < size; f++)
{
if (cmp(array[f]))
return (f);
}
return (-1);
}
