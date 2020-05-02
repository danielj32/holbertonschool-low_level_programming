#include "lists.h"
/**
*add_dnodeint - print the doubly linked list.
*@head: is the head of the list
*@n: number of the list
* Return: num of nodes.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head)
		newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = *head;
	}
	*head = newnode;
	return (newnode);
}
