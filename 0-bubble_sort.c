#include "sort.h"

/**
 * bubble_sort - Sorts an array
 * @array: pointer
 * @size: array.
 * Return: Non
 */
void bubble_sort(int *array, size_t size)
{
	int a = 1;
	int x;

	for (; a < (int)size; a++)
	{
		for (x = 0; x < (int)size - a; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap(&array[x + 1], &array[x]);
				print_array(array, size);
			}
		}
	}
}

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
