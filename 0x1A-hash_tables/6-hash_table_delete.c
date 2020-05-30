#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table.
 *@ht: node
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	while (j < ht->size)
	{
		while (ht->array[j] != NULL)
		{
			n = ht->array[j];
			free(n->key);
			free(n->value);
			ht->array[j] = ht->array[j]->next;
			free(n);
		}
		j++;
	}
	free(ht->array);
	free(ht);
}
