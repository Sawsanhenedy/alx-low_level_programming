#include"lists.h"
#include<stdio.h>
/**
 * print_list - prints all the linked lists' elements
 * @h: pointer
 * Return: the printed nodes number
 */
size_t print_list(const list_t *h)
{
size_t f = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
f++;
}
return (f);
}
