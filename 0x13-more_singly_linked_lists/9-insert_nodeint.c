#include"lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: 1st node pointer
 * @idx: index
 * @n: new node's value
 * Return: the addressed new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nd, *nw_nd = malloc(sizeof(listint_t));
unsigned int a = 0;
if (!head || !nw_nd)
return (NULL);
nw_nd->n = n;
nw_nd->next = NULL;
if (!idx)
{
nw_nd->next = *head;
*head = nw_nd;
return (nw_nd);
}
nd = *head;
while (nd)
{
if ( a == idx - 1)
{
nw_nd->next = nd->next;
nd->next = nw_nd;
return (nw_nd);
}
a++;
nd = nd->next;
}
free(nw_nd);
return (NULL);
}
