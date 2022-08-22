#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table we are adding the key/value
 * @key: the key
 * @value: the value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode = NULL, *aux = NULL;

	unsigned const char *keydob = (unsigned const char *)key;

	if (!ht || !key)
		return (0);
	index = key_index(keydob, ht->size);
	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	newnode = malloc(sizeof(*newnode));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
		return (1);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
