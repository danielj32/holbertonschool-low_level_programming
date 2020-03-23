#include "lists.h"
/**
 *free_listint - free the list.
 *@head: begin of the list
 */

void free_listint(listint_t *head)
{
	listint_t *pt;

	while (head)
	{
		pt = head->next;
		free(head);
		head = pt;
	}


}
