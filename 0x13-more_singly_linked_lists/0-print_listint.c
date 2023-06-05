#include "lists.h"
/**
 * print_listint - prints a list which is linked
 * @h: 1st node pointer
 * Return: list's size
 */
size_t print_listint(const listint_t *h)
{
size_t a = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return (a);
}
