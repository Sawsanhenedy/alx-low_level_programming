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
const listint_t **_r(const listint_t **l, size_t s, const listint_t *n)
{
const listint_t *nw_l;
size_t a;
nw_l = malloc(s * sizeof(listint_t *));
if (nw_l == NULL)
{
free(l);
exit(98);
}
for (a = 0; a < s - 1; a++)
nw_l[a] = l[a];
nw_l[a] = new;
free(l);
return (nw_l);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: 1st node pointer
 * Return: the node's number
 */
size_t print_listint_safe(const listint_t *head)
{
size_t a, number = 0;
const listint_t **l = NULL;
while (head != NULL)
{
for (a = 0; a < number; a++)
{
if (head == l[a])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(l);
return (number);
}
}
number++;
l = _r(l, number, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(l);
return (number);
}
