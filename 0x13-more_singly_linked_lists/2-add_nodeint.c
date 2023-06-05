#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: 1st node pointer
 * @n: new node value
 * Return: Node's pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (!head || !new_node)
return (NULL);
new_node->next = NULL;
new_node->n = n;
if (*head)
new_node->next = *head;
*head = new_node->next;
return (new_node);
}
