Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Jibs-Jibz 
Jibs-Jibz
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
alx-low_level_programming/0x17-doubly_linked_lists/2-add_dnodeint.c
@Jibs-Jibz
Jibs-Jibz Create 2-add_dnodeint.c
Latest commit c2a348e 20 minutes ago
 History
 1 contributor
38 lines (30 sloc)  561 Bytes

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
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
alx-low_level_programming/lists.h at main · Jibs-Jibz/alx-low_level_programmingalx-low_level_programming/0x15-file_io at main · Jibs-Jibz/alx-low_level_programmingalx-low_level_programming/2-add_dnodeint.c at main · Jibs-Jibz/alx-low_level_programming
