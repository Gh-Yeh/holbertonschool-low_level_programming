#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *next;
=======
	list_t *next = head;
>>>>>>> 53bf1e79667d0e1de55687627e1453614c9b6b5e

	while (head != 0)
	{
		next = next->next;
		free(head->str);
		free(head);
		head = next;
	}
}
