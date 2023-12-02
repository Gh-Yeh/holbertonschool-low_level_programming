/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != 0)
	{
		next = next->next;
		free(head->str);
		free(head);
		head = next;
	}
}
