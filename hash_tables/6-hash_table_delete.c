#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *before = NULL, *aux = NULL;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			before = ht->array[index];
			while (before)
			{
				aux = before->next;
				free(before->key);
				free(before->value);
				free(before);
				before = aux;
			}
		}
		free(ht->array);
		free(ht);
	}
}
