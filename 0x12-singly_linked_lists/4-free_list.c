#include "lists.h"
/**
 *free_list - free all list
 *@head: pointer of begin
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		free(head->next);
	}

}
