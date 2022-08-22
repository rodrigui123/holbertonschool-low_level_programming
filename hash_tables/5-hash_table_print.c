#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, printcount = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;

	putchar('{');
	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			if (printcount != 0)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			printcount++;
		}
		index++;
	}
	printf("}\n");
}
