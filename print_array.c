#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints
 * @array:printed
 * @size: Number
 */
void print_array(const int *array, size_t size)
{
    size_t a

    a = 0;
    while (array && i < size)
    {
        if (a > 0)
            printf(", ");
        printf("%d", array[a]);
        ++a;
    }
    printf("\n");
}
