#include "hash_tables.h"
/**
 * hash_table_get - func to retrieve a value associeted with a key
 * @ht: the pointer the hash table
 * @key: the key to retrive value
 *
 * Return: value or NULL if key doesnt exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
