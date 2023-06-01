#include"lists.h"
#include<stdlib.h>
/**
 * list_len - linked lists's number of elements
 * @h: pointer
 * Return: linked lists's number of elements
 */
size_t list_len(const list_t *h)
{
size_t a = 0;
while (h)
{
a++;
h = h->nx;
}
return (a);
}
