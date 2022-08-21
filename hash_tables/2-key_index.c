#include "hash_tables.h"

/**
 * key_index - 
 * @key: 
 * @size: size of key
 * Return: position of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
