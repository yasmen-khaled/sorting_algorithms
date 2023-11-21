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
		print_list((const listint_t *)*list);
		}
	}
}


void node_swap(listint_t **j, listint_t **c, listint_t *x)
{
	(*c)->next = x->next;
	if (x->next != NULL)
	x->next->prev = *c;

	x->prev = (*c)->prev;
	x->next = *c;

	if ((*c)->prev != NULL)
	(*c)->prev->next = x;
	else
	*j = x;

	(*c)->prev = x;
	*c = x->prev;
}
