#include"lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: 1st node pointer
 * Return: Revers
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *nd = NULL, *nx = NULL;
if (!head || !*head)
return (NULL);
nd = *head;
*head = NULL;
while (nd)
{
nx = nd->next;
nd->next = *head;
*head = nd;
nd = nx;
}
return (*head);
}
