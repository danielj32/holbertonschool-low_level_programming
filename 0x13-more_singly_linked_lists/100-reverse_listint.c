#include "lists.h"
/**
 * reverse_listint - reverse a linked list.
 *@head: first node
 * Return: head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *actual = NULL;

	while (*head)
	{
		before = *head;
		*head = (*head)->next;
		before->next = actual;
		actual = before;
	}

	*head = actual;
	return (*head);
}
