#include "lists.h"
/**
 * createnew - create new node
 * @newnode: created node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *createnew(dlistint_t *newnode, int n)
{
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;
	return (newnode);
}
/**
 * insert_dnodeint_at_index - inserts a new node at
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (*h == NULL)
		return (NULL);
	dlistint_t *newnode;
	dlistint_t *temp = head;
	unsigned int count = 0;
	unsigned int trev = 0;
	dlistint_t *head = *h;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count || idx < 0)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == count - 1)
		return (add_dnodeint_end(h, n));
	temp = head;
	newnode = createnew(newnode, int n);

	if (newnode == NULL)
		return (NULL);
	while (temp)
	{
		if (trev == (idx - 1))
		{
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next = newnode;
			newnode->next->prev = newnode;
			return (newnode);
		}
		temp = temp->next;
		trev++;
	}
	return (NULL);
}
