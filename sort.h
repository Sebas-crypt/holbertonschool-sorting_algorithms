#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - doubly linked list node
 * @n: integer stored in this node
 * @prev: pointer to the previous element
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void qs(int *array, ssize_t first, ssize_t last, int size);
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size);

#endif
