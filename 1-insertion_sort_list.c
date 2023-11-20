#include "sort.h"

void insertion_sort(listint_t **l)
{
 listint_t *curr, *n;

 if (*l == NULL || (*l)->next == NULL)
    return;

 curr = (*l)->next;
 while (curr != NULL)
 {
    n = curr;
    while (n != *l && n->prev->n > n->n)
    {
        node_swap(l, &(n->prev), n);
    }
    curr = curr->next;
 }
}

void node_swap(listint_t **l, listint_t **curr, listint_t *n)
{
 (*curr)->next = n->next;
 if (n->next != NULL)
    n->next->prev = *curr;

 n->prev = (*curr)->prev;
 n->next = *curr;

 if ((*curr)->prev != NULL)
    (*curr)->prev->next = n;
 else
    *l = n;

 (*curr)->prev = n;
 *curr = n->prev;
}
