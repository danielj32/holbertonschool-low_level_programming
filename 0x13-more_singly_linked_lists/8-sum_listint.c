#include "lists.h"
/**
 * sum_listint - sum of the list.
 *@head: first node
 * Return: count.
 */

int sum_listint(listint_t *head)
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

