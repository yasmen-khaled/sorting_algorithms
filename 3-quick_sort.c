#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @arrayToSort:pointer
 * @arraySize: size of the array.
 * Return: non
 */
void quick_sort(int *arrayToSort, size_t arraySize)
{
	if (arraySize < 2)
		return;

	recursive(arrayToSort, 0, (int)arraySize - 1, arraySize);
}

/**
 * recursive - Manage
 * @arrayToSort:pointer to the array to sort.
 * @startIndex: The start position.
 * @endIndex: The end position.
 * @arraySize:size of the array.
 */

void recursive(int *arrayToSort, int startIndex, int endIndex, size_t arraySize)
{
	int pivotIndex;

	if (startIndex < endIndex)
	{
		pivotIndex = parti(arrayToSort, startIndex, endIndex, arraySize);

		recursive(arrayToSort, startIndex, pivotIndex - 1, arraySize);
		recursive(arrayToSort, pivotIndex + 1, endIndex, arraySize);
	}
}

/**
 * parti - Handles partioning
 * @arrayToSort:pointer
 * @startIndex:position.
 * @endIndex:position.
 * @arraySize:array.
 * Return:index.
 */

int parti(int *arrayToSort, int startIndex, int endIndex, size_t arraySize)
{
	int pivot = arrayToSort[endIndex];
	int index = startIndex, x, allElementsEqual = 1;

	for (x = startIndex; x < endIndex; x++)
	{
		if (arrayToSort[x] != pivot)
			allElementsEqual = 0;

		if (arrayToSort[x] < pivot)
		{
			swap(&arrayToSort[index], &arrayToSort[x]);
			if (index != x && !allElementsEqual)
				print_array(arrayToSort, arraySize);
			index++;
		}
	}
	swap(&arrayToSort[index], &arrayToSort[endIndex]);
	if (index != x && !allElementsEqual)
		print_array(arrayToSort, arraySize);

	return (index);
}
/**
 * swap - Swaps
 * @x:pointer.
 * @y:pointer.
 *Return: non
 */
void swap(int *firstElement, int *secondElement)
{
	int temp = *firstElement;

	*firstElement = *secondElement;
	*secondElement = temp;
}
