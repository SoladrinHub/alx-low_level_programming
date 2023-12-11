#include "lists.h"

/**
  * add_nodeint - add a new nde at the beginning of list
  * @head: A pointer to the address of the head of listint_t
  * @n: The integer for the new node to contain
  * Return: if the function fails return NULL, otherwise return address.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

