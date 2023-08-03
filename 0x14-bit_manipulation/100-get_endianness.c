#include "main.h"
/**
 * get_endianness -  checks the endianness
 * Return: 0 (big), 1 (small)
 */
int get_endianness(void)
{
unsigned long int a = 1;
return (*(char *)&a);
}
