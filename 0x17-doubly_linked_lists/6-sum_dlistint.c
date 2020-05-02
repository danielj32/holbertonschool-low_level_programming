#include "lists.h"
/**
 * sum_dlistint - sum of the list.
 *@head: first node
 * Return: count.
 */

int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		int ct = 0;

		while (head != NULL)
		{
			ct += head->n;
			head = head->next;
		}
		return (ct);
	}
	else
	{
		return (0);
	}

}
