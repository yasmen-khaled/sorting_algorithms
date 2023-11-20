#include "sort.h"

/**
 * swap - Swaps
 * @x:pointer.
 * @y:pointer.
 * Return: Non
 */
void swap(int *xd, int *yd)
{
	int temp = *xd;

	*xd = *yd;
	*yd = temp;
}

/**
 * bubble_sort - Sorts an array
 * @array: pointer
 * @size: array.
 * Return: Non
 */
void bubble_sort(int *array, size_t size)
{
	int i = 1, x;

	for (; i < (int)size; i++)
	{
		for (x = 0; x < (int)size - i; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap(&array[x + 1], &array[x]);
				print_array(array, size);
			}
		}
	}
}
