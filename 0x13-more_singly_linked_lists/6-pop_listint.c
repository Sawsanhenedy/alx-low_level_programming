#include"lists.h"
/**
 * pop_listint - head node to be poped
 * @head: 1st pointer
 * Return: poped node value
 */
int pop_listint(listint_t **head)
{
listint_t *nd;
int a;
if (!head || !*head)
return (0);
nd = (*head)->next;
a = (*head)->n;
free(*head);
*head = nd;
return (a);
}
