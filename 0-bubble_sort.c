#include "sort.h"

/**
 * swap - Swaps
 * @x:pointer.
 * @y:pointer.
 *
 * Return: Nothing.
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Sorts an array
 * @array:pointer
 * @size:size of the array.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;
	}
}
