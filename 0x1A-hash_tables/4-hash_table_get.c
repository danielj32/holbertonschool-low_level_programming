#include "hash_tables.h"
/**
 * hash_table_get - check the code for Holberton School students.
 *@ht: node
 *@key: is the key
 * Return: NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int ct;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	ct = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[ct];

	while (new_node)
	{
		if (!strcmp(new_node->key, key))
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
