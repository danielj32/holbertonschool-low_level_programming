#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node.
 *@head: list of beg.
 *@index: list of num
 * Return: head.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ct = 0;

	while (ct < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		ct++;
	}
	return (head);
}

