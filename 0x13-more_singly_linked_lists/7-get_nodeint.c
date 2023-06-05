#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: 1st node pointer
 * @index: index
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nd;
unsigned int a;
for (nd = head, a = 0; nd && a < index; nd = nd->next, a++)
;
return (nd);
}
