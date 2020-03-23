#include "lists.h"
/**
 * add_nodeint_end - add node to end.
 *@head: double pointer
 *@n: num of elements
 * Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *final;

	aux = *head;

	final = malloc(sizeof(listint_t));
	if (final == NULL)
		return (NULL);
	final->n = n;
	final->next = NULL;
	if (*head == NULL)
		*head = final;
	else
	{
		while (aux->next != 0)
		{
			aux = aux->next;
		}
		aux->next = final;
	}
	return (*head);
}

