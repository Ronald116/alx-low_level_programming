#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value 
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Else - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	element = ht->array[idx];
	while (element && strcmp(element->key, key) != 0)
		element = element->next;

	return ((element == NULL) ? NULL : element->value);
}
