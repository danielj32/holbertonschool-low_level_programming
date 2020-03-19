#include "lists.h"
/**
 * add_node_end - add end node of list.
 *@head: pointer of the begin
 *@str: list of the string.
 * Return: pointer head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *beg;
	unsigned int ct;

	ct = 0;

	while (str[ct] != '\0')
	{
		ct++;
	}

	beg = malloc(sizeof(list_t));
	if (beg ==  NULL)
		return (NULL);
	beg->str  = strdup(str);
	beg->len  = ct;

	if (*head == NULL)
	{
		*head = beg;
		beg->next = NULL;
		return (*head);
	}
	temp =  *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = beg;
	beg->next = NULL;
	return (*head);
}

