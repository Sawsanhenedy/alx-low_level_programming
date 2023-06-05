#include"lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: 1st node pointer
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
int add = 0;
while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
