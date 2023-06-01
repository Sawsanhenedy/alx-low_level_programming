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
n->s = strdup(str);
n->l = l;
n->nx = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
while (t->nx)
t = t->nx;
t->nx = n;
return (n);
}
