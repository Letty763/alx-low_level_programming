#include "lists.h"

/**
 * get_dnodeint_at_index -  will return the nth node of  dlistint_t linked list
 * @head: pointer for the beginning of the list
 * @index: the guide of a node to look for, beginning from 0
 * Return: the nth node or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
