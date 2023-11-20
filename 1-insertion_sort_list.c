#include "sort.h"


/**
 * insertion_sort_list - Sort linked list
 *
 * @list:pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *curr, *ins;

	if (!list || !(*list) || !((*list)->next))
		return;

	for (curr = (*list)->next; curr != NULL; curr = tmp)
	{
		tmp = curr->next;
		ins = curr->prev;

		while (ins != NULL && curr->n < ins->n)
		{
			node_swap(list, &ins, curr);
			print_list((const listint_t *)*list);
		}
	}
}
