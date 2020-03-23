#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - delete of the head.
 *@head: list of numbers.
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	int ct = -1;
	listint_t *sig_nod = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	sig_nod = (*head)->next;
	ct = (*head)->n;
	free(*head);
	*head = sig_nod;
	return (ct);
}

