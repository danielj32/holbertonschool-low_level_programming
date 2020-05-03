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
	dlistint_t *n1;
	unsigned int ct =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (ct != (index - 1))
	{
		temp = temp->next;
		ct++;
		if (temp == NULL)
			return (-1);
	}
	n1 = temp->next;
	temp->next = n1->next;
	free(n1);
	return (1);
}
