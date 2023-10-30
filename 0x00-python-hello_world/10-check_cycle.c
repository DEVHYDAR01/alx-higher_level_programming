#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - This  function will check for a loop in a linked list
 * @list: This is the data type listint_t pointer of list
 * Return: 0 if no cycle || 1 if there is cycle will be returned
 */
int check_cycle(listint_t *list)
{
	listint_t *loop_1;
	listint_t *loop_2;

	if (list == NULL || list->next == NULL)
		return  (0);

	loop_1 = list->next;
	loop_2 = list->next->next;

	while (loop_1 && loop_2 && loop_2->next)
	{
		if (loop_1 == loop_2->next)
		{
			return (1);
		}
		loop_1 = loop_1->next;
		loop_2 = loop_2->next->next;
	}
	return (0);
}
