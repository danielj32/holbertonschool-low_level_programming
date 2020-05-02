#include "lists.h"
/**
*add_dnodeint_end - add node at the end.
*@head: is the head of the list
*@n: number of the list
* Return: num of nodes.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ult;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	ult = *head;

	if (newnode == NULL)
		return (NULL);

		newnode->n = n;
		newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (ult->next != NULL)
		{
			ult = ult->next;
		}
		newnode->prev = ult;
		ult->next = newnode;
	}
	return (newnode);
}
