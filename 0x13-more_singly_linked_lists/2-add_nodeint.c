#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: 1st node pointer
 * @n: new node value
 * Return: Node's pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_n = malloc(sizeof(listint_t));
if (!head || !n_n)
return (NULL);
n_n->next = NULL;
n_n->n = n;
if (*head)
n_n->next = *head;
*head = n_n->next;
return (n_n);
}
