#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 *@head: first node
 *@index: list of num
 * Return: 1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *n1 = temp;
	unsigned int ct =  0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (!temp->next && ct == index)
		{
			n1 = temp->prev;
			n1->next = NULL;
			return (free(temp), 1);
		}
		if (ct == index)
		{
			n1 = temp->prev;
			n1->next = temp->next;
			temp->next->prev = n1;
			free(temp);
			return (1);
		}
		temp = n1->next;
		ct++;
	}
	return (-1);
}
