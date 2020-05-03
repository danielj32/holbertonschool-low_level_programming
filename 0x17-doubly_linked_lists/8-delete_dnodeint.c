#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 *@head: first node
 *@index: list of num
 * Return: 1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *tem2 = temp;
	unsigned int ct = 0;

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
			tem2 = temp->prev;
			tem2->next = NULL;
			return (free(temp), 1);
		}
		if (ct == index)
		{
			tem2 = temp->prev;
			tem2->next = temp->next;
			temp->next->prev = tem2;
			free(temp);
			return (1);
		}
		temp = temp->next;
		ct++;
	}
	return (-1);
}
