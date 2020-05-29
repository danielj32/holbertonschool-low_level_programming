#include "hash_tables.h"
/**
 * hash_table_print - that prints a hash table
 * @ht: node
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ct;
	hash_node_t *aux;
	unsigned int j = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (ct = 0; ct < ht->size; ct++)
	{
		if (ht->array[ct] != NULL)
		{
			if (j == 1)
			{
				printf(", ");
			}
			aux = ht->array[ct];
			while (aux)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				if (aux != NULL)
				{
					printf(", ");
				}
			}
			j = 1;
		}
	}
	printf("}\n");
}
