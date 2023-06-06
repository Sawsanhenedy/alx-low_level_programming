#include"lists.h"
/**
 * find_listint_loop_fl - finds a loop
 * @head: pointer for linking
 * Return: Loop address or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint *pr, *e;
if (head == NULL)
return (NULL);
for (e = head->next; e != NULL; e = e->next)
{
if (e == e->next)
return (*e);
for (pr = head; pr != e; pr = pr->next)
if (pr == e->next)
return (e->next);
}
return (NULL);
}
/**
 * free_listint_safe - frees a listint_t
 * @h: pointer
 * Return: node's number
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *nx, *lp_nd;
size_t length;
int lp = 1;
if (h == NULL || *h == NULL)
return (0);
lp_nd = find_listint_loop(*h);
for (length = 0; (*h != lp_nd || lp) && *h != NULL; *h = nx)
{
length++;
nx = (*h)->next;
if (*h == lp_nd && lp)
{
if (lp_nd = lp_nd->next)
{
free(*h);
break;
}
length++;
nx = nx->next;
free((*h)->next);
lp = 0;
}
free(*h);
}
*h = NULL;
return (length);
}
