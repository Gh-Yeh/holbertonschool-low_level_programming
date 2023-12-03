#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	h = *head;
	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;
	temp = h;

	if (h == NULL)
	{
		(*head) = newnode;
		return (*head);
	}

	while (temp->next != 0)
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
