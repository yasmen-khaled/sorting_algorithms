#include <stdio.h>

void swap(int *xp, int *yp)
{
 int temp = *xp;
 *xp = *yp;
 *yp = temp;
}

void bubble_sort(int *array, size_t size)
{
 int i, j;
 for (i = 0; i < size-1; i++)
     for (j = 0; j < size-i-1; j++)
         if (array[j] > array[j+1])
             swap(&array[j], &array[j+1]);
}

void print_array(int *array, size_t size)
{
 size_t i;
 for (i=0; i < size; i++)
     printf("%d ", array[i]);
 printf("\n");
}
