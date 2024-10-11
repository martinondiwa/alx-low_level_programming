#include "sorted_hash_table.h"

int slist_set_first(shash_table_t *ht, shash_node_t *node)
{
    node->sprev = NULL;
    node->snext = NULL;
    ht->shead = node;
    ht->stail = node;
    return (1);
}

int slist_set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
    if (old_node->sprev == NULL)
        ht->shead = node;
    node->snext = old_node;
    node->sprev = old_node->sprev;
    old_node->sprev = node;
    if (node->sprev != NULL)
        node->sprev->snext = node;
    return (1);
}

int slist_set_end(shash_table_t *ht, shash_node_t *node)
{
    shash_node_t *old_node = ht->stail;

    ht->stail = node;
    node->snext = NULL;
    node->sprev = old_node;
    old_node->snext = node;
    return (1);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *node, *curr_old_node;

    if (key == NULL || ht == NULL)
        return (0);
    index = key_index((unsigned char *)key, ht->size);
    node = ht->array[index];
    if (node == NULL)
        node = set_spair_only(ht, key, value, index);
    else
    {
        while (node != NULL)
        {
            if (strcmp(node->key, key) == 0)
                return (update_value(node, value));
            node = node->next;
        }
        node = set_spair_front(ht, key, value, index);
    }
    if (node == NULL)
        return (0);
    if (ht->shead == NULL)
        return (slist_set_first(ht, node));
    curr_old_node = ht->shead;
    while (curr_old_node != NULL)
    {
        if (strcmp(curr_old_node->key, node->key) >= 0)
            return (slist_set(ht, curr_old_node, node));
        curr_old_node = curr_old_node->snext;
    }
    return (slist_set_end(ht, node));
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL)
        return (NULL);
    index = key_index((unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }
    return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
    unsigned long int count = 0;
    shash_node_t *node = ht->shead;

    if (ht == NULL)
        return;
    printf("{");
    while (node != NULL)
    {
        if (count > 0)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        count++;
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
    unsigned long int count = 0;
    shash_node_t *node = ht->stail;

    if (ht == NULL)
        return;
    printf("{");
    while (node != NULL)
    {
        if (count > 0)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        count++;
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i = 0;
    shash_node_t *node;

    while (i < ht->size)
    {
        while (ht->array[i] != NULL)
        {
            node = ht->array[i]->next;
            free(ht->array[i]->key);
            free(ht->array[i]->value);
            free(ht->array[i]);
            ht->array[i] = node;
        }
        i++;
    }
    free(ht->array);
    free(ht);
}

