#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - this function will insert a number sorted in a list
 * @head: this is a data type double ointer of list
 * @number: the data type int number to be added
 * Return: 0 if no cycle || 1 if there is cycle is returned
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
