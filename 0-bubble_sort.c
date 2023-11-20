#include <stdio.h>

/**
 * bubble_sort - Sorts array
 * @array:pointer
 * @size:sizey.
 * Return: Non
 */
void bubble_sort(int *array, size_t size)
{
	int x = 1
   int i;

	for (; x < (int)size; x++)
	{
		for (i = 0; i < (int)size - i; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i + 1], &array[i]);
				print_array(array, size);
			}
		}
	}
}
       if (!swapped)
           break;
   }
}

/**
 * swap - Swaps
 * @x:pointer
 * @y:pointer
 * Return: Non.
 */
void swap(int *i, int *p)
{
	int temp = *i;

	*i = *y;
	*p = temp;
}


