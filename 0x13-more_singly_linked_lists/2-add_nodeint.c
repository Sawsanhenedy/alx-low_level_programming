#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: 1st node pointer
 * @n: new node value
 * Return: Node's pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw_nd = malloc(sizeof(listint_t));
if (!head || !nw_nd)
return (NULL);
nw_nd->next = NULL;
nw_nd->n = n;
if (*head)
nw_nd->next = *head;
*head = nw_nd;
return (nw_nd);
}
