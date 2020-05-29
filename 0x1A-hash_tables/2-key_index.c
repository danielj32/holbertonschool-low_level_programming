#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 *@key: is the password
 *@size: size of hash tables
 * Return: hash.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int ct = 0;

	ct = hash_djb2(key);
	hash = ct % size;
	return (hash);
}
