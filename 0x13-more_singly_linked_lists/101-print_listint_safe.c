#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _r - memory reallocation
 * @l: list
 * @s: size
 * @n: new
 * Return: new pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t *nw_ls;
size_t a;
nw_ls = malloc(size * sizeof(listint_t *));
if (nw_ls == NULL)
{
free(list);
exit(98);
}
for (a = 0; a < sz - 1; a++)
nw_ls[a] = *list[a];
nw_ls[a] = *new;
free(list);
return (nw_ls);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: 1st node pointer
 * Return: the node's number
 */
size_t print_listint_safe(const listint_t *head)
{
size_t a, number = 0;
const listint_t **ls = NULL;
while (head != NULL)
{
for (a = 0; a < number; a++)
{
if (head == ls[a])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(ls);
return (number);
}
}
number++;
ls = _r(ls, number, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(ls);
return (number);
}
