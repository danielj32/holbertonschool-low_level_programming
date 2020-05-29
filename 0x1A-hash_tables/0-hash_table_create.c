#include "hash_tables.h"
/**
 * hash_table_create - check the code for Holberton School students.
 *@size: is the size for hash table
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	if (size < 1)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
	{
		return (NULL);
	}

	new_hash->array = (hash_node_t **) malloc(size * sizeof(hash_node_t));

	if (new_hash->array == NULL)
		return (NULL);

	memset(new_hash, 0, size * sizeof(hash_node_t));

	new_hash->size = size;

	return (new_hash);
}