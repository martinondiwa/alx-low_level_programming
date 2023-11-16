#include "lists.h"

/**
 * free_list - Releases the memory allocated for a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: No return value.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
