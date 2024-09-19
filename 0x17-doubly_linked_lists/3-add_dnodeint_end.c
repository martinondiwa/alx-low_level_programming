#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a dlistint_t list.
 *
 * @head: Head of the list.
 * @n: Value of the element.
 * Return: The address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *h;
    dlistint_t *new;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    h = *head;

    if (h != NULL)
    {
        while (h->next != NULL)
            h = h->next;
        h->next = new;
        new->prev = h;
    }
    else
    {
        *head = new;
        new->prev = NULL;
    }

    return (new);
}
