#include "lists.h"
/**
 *free_list - free all list
 *@head: pointer of begin
 */

void free_list(list_t *head)
{
	list_t *pt;

	while (head)
	{
		pt = head->next;
		free(head);
		head = pt;
	}

}
