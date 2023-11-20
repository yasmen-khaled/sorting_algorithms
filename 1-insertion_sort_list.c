#include "sort.h"

void insertion_sort_list(listint_t **list)
{
  listint_t *current, *next, *insert;

  if (!list || !(*list) || !((*list)->next))
      return;

  for (current = (*list)->next; current != NULL; current = next)
  {
      next = current->next;
      insert = current->prev;

      while (insert != NULL && current->n < insert->n)
      {
          node_swap(list, &insert, current);
      }
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
