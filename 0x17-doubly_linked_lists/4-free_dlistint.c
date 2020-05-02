#include "lists.h"
/**
 *free_dlistint - free the list.
 *@head: begin of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pt;

	while (head)
	{
		pt = head->next;
		free(head);
		head = pt;
	}


}
