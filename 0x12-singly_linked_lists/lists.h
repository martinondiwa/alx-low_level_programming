#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Definition of a singly linked list node.
 * @str: String stored in the node (allocated using malloc).
 * @len: Length of the string.
 * @next: Pointer to the next node in the list.
 *
 * Description: Represents a node in a singly linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
