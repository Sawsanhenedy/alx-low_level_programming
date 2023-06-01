#include"lists.h"
#include<string.h>
#include<stdlib.h>
/**
 * add_node_end - a new node will be added at the
 * end of the linked list
 * @head: pointer (double)
 * @str: string (new)
 * Return: NULL (fail), new element's address (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *t = *head;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = l;
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
while (t->next)
t = t->next;
t->next = n;
return (n);
}
