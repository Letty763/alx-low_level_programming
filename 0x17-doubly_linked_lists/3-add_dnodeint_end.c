#include "lists.h"

/**
 * add_dnodeint_end -  will add a new node at the end
 * of dlistint_t list
 *
 * @head: this is the beginning of the list
 * @n:  the worth of the component
 * Return: this is the address of a new component
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
