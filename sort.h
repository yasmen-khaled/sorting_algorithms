#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>

void swap(int *xp, int *yp);
void bubble_sort(int *array, size_t size);
void print_array(int *array, size_t size);
#endif
