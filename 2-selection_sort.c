#include "sort.h"

/**
 * selection_sort - sorts an array
 * @array: array
 * @size: size of the array
 *
 * Return:func
 */

void selection_sort(int *array, size_t size)
{
	size_t outer_loop, inner_loop;
	size_t smallest_index;

	for (outer_loop = 0; outer_loop < size - 1; outer_loop++)
	{
		smallest_index = outer_loop;

		for (inner_loop = outer_loop + 1; inner_loop < size; inner_loop++)
		{
			if (array[inner_loop] < array[smallest_index])
				smallest_index = inner_loop;
		}

		if (outer_loop != smallest_index)
		{
			swap(&array[outer_loop], &array[smallest_index]);
			print_array((const int *)array, size);
		}
	}
}


/**
 * swap - Swaps
 * @xd:pointer
 * @yd:pointer
 * Return:non
 */
void swap(int *xd, int *yd)
{
	int temp = *xd;

	*xd = *yd;
	*yd = temp;
}
