#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: Head of the list.
 * @n: Value of the element.
 * Return: The address of the new element.
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
