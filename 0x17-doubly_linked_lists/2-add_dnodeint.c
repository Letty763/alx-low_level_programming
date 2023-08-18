#include "lists.h"

/**
 * add_dnodeint - this will add a new node at the start
 * of a dlistint_t list
 *
 * @head: this is the beginning of a list
 * @n: this will be  the worth of the component
 * Return: will return address of component
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
