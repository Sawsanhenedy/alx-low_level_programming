#include"function_pointers.h"
#include<stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: number of elements
 * @action: the pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int f;
if (array == NULL || action == NULL)
return;
for (f = 0; f < size; f++)
{
action(array[f]);
}
}
