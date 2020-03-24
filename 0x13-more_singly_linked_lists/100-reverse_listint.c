#include "lists.h"
/**
 * reverse_listint - reverse a linked list.
 *@head: first node
 * Return: actual.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *actual = *head;
	listint_t *next = NULL;

	while (actual != NULL)
	{
		next = actual->next;
		actual->next = before;
		before = actual;
		actual = next;
	}

	*head = before;
	return (actual);
}
