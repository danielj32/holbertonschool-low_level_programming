#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 *@head: first node
 *@index: list of num
 * Return: 1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *n1;
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

