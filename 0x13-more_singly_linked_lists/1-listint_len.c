#include"lists.h"
/**
 * listint_len - linked list to be printed
 * @h: pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t a = 0;
while (h)
{
h = h->next;
a++;
}
return (a);
}
