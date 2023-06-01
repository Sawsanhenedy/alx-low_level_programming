#include"lists.h"
#include<stdlib.h>
/**
 * free_list - makes the linked list free
 * @head: pointer
 * Return: free
 */
void free_list(list_t *head)
{
list_t *t;
while (head)
{
t = head->nx;
free(head->s);
free(head);
head = t;
}
}
