#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 *
 * @h: Head of the list.
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
