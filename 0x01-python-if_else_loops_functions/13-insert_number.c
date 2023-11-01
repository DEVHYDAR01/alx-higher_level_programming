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
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = number;

	if (node == NULL || node->n >= number)
	{
		newnode->next = node;
		*head = newnode;
		return (newnode);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;

	newnode->next = node->next;
	node->next = newnode;

	return (newnode);
}
