#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Head of the list.
 * @index: Index of the nth node.
 * Return: nth node or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;

    if (head == NULL)
        return (NULL);

    while (head->prev != NULL)
        head = head->prev;

    i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }

    return (NULL);
}
