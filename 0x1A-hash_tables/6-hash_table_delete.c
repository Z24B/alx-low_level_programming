#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *next_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next_node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
