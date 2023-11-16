#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for a singly linked list */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
