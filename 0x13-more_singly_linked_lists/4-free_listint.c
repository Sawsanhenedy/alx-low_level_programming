#include"lists.h"
/**
 * free_listint - frees the list
 * @head: 1st pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *n;
while (head)
{
n = head;
head = head->next;
free(n);
}
}
