#include"lists.h"
/**
 * free_listint2 - list will be free
 * @head: 1st node pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *n, *t;
if (!head)
return;
n = *head;
while (n)
{
t = n;
n = n->next;
free(t);
}
*head = NULL;
}
