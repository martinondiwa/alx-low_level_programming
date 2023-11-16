#include "lists.h"

/**
 * print_list - Prints all the elements of a singly linked list.
 * @h: Pointer to the head of the singly linked list.
 *
 * Return: Number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem;

	timnav = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next
			timnav++;
	}

	return (timnav);
}





