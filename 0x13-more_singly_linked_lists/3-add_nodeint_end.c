#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_ list
 * @head: A pointer to the address of the head 
 * @n: the integer for the new node
 * Return: if the function return NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_int *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last-> != NULL)
			last = last->next;
		last->next = mew;
	}
	return (*head);
}
