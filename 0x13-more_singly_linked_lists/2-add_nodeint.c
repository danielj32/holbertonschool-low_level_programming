#include "lists.h"
/**
 *add_nodeint - add a new node of begin
 *@head: begin of list
 *@n: num of elements
 *Return: newnod.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	newnod = (listint_t *) malloc(sizeof(listint_t));

	if (newnod)
	{
		newnod->n = n;
		newnod->next = *head;
	}
	*head = newnod;
	return (newnod);
}
