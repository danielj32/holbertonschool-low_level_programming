#include "lists.h"
/**
 * print_dlistint - print the doubly linked list.
 *@h: is the head of the list
 * Return: num of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int ct = 0;

	while (temp != NULL)
	{
		printf("%d ", temp->n);
		temp = temp->next;
		ct++;
	}
	printf("\n");
	return (ct);
}
