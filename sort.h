#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - the linked list
 * @n: the int xd
 * @prev: prev pointer
 * @next: next poniter
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void sorting_front(listint_t **list, listint_t *aux);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);


#endif /*SORT_H*/
