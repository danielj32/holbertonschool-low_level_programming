#include "hash_tables.h"
/**
 * hash_table_set - check the code for Holberton School students.
 *@ht: hash table
 *@key: is hte key
 *@value: value  associated with the key
 * Return: new_nod.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in, ct;
	hash_node_t *node;
	char *pt;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	pt = strdup(value);

	if (pt == NULL)
		return (0);

	in = key_index((const unsigned char *)key, ht->size);
	for (ct = in; ht->array[ct]; ct++)
	{
		if (strcmp(ht->array[ct]->key, key) == 0)
		{
			free(ht->array[ct]->value);
			ht->array[ct]->value = pt;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(pt);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = pt;
	node->next = ht->array[in];
	ht->array[in] = node;

	return (1);
}
