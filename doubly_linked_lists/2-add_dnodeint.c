#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newnode;
	dlistint_t *h;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	h = *head;
	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;


	if (h == NULL)
	{
		(*head) = newnode;
		return (*head);
	}
	else
	{
		newnode->next = h;
		h->prev = newnode;
		h = newnode;
		*head = h;

		return (h);
	}
}
