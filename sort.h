#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>

typedef struct listint_s
{
 int n;
 struct listint_s *next;
 struct listint_s *prev;
} listint_t;

void swap(int *xd, int *yd);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void node_swap(listint_t **l, listint_t **curr, listint_t *n);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
#endif
