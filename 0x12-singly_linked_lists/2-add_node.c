#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds new node at the beginning of a list_t list
 * @head: og linked list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int x = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[x])
		x++;

	temp->len = x;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
