#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "deck.h"

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer  stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void my_sort(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *array, int i, int j);
void shell_sort(int *array, size_t size);
void swapem(listint_t *l, listint_t *r, listint_t **h);
void cocktail_sort_list(listint_t **list);
int findmax(int *array, size_t size);
int count(int *array, size_t size, int val);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void sort(int *array, int low, int high, int *temp);
void merge(int *array, int low, int mid, int high, int *temp);
int len(int *array);
void stupify(int *array, int heap, int i, int size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void counting_sort_r(int *array, size_t size, int pos, int *out, int *ca);
void swapint(int *l, int *r);
void b_merge(int *array, int low, int count, int dir, size_t size);
void b_sort(int *array, int low, int count, int dir, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
