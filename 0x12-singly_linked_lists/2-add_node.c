#include "lists.h"
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *s)
{
	size_t len = strlen(s) + 1;
	char *dup = malloc(len);

	if (dup != NULL)
	{
		strcpy(dup, s);
	}

	return (dup);
}

/**
 * add_node - Adds a new node at the beginning.
 * @head: Pointer to the head of the linked list.
 * @str: String to store in the list.
 *
 * Return: Address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = my_strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
