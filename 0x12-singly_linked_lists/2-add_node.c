#include"lists.h"
#include<string.h>
#include<stdlib.h>
/**
 * add_node - new node to be added to the linked list
 * @head: pointer (double)
 * @str: string (new)
 * Return: Null (fail), the new elements address (success)
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = l;
n->next = (*head);
(*head) = n;
return (*head);
}
