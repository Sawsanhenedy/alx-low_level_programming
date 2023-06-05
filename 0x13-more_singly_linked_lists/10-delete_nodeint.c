#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: 1st node pointer
 * @index: index
 * Return: 1 (success), -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *nd, *pr_nd;
unsigned int a = 0;
if (!head || !*head)
return (-1);
if (!index)
{
nd = *head;
*head = (*head)->next;
free(nd);
return (1);
}
nd = *head;
while (nd)
{
if (a == index)
{
pr_nd->next = nd->next;
free(nd);
return (1);
}
a++;
pr_nd = nd;
nd = nd->next;
}
return (-1);
}
