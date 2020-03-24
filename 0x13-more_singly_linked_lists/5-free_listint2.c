#include "lists.h"
/**
 *free_listint2 - free the list.
 *@head: begin of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *pt = NULL;

		while (head && *head)
		{
			pt = *head;
			*head = (*head)->next;
			free(pt);
		}
}
