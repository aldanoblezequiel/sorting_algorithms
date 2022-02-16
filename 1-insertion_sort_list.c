#include "sort.h"

/**
 * sorting - sorteaa xd
 * @list: lista xd
 * @aux2: var 2
 * Return: 0
 */
void sorting(listint_t **list, listint_t *aux2)
{
	listint_t *swap = NULL;

	while (aux2->prev)
	{
		if (aux2->n < aux2->prev->n)
		{
			swap = aux2->prev;
			if (swap->prev)
			{
				aux2->prev = swap->prev;
				swap->prev->next = aux2;
			}
			else
			{
				aux2->prev = NULL, *list = aux2;
			}
			if (aux2->next)
			{
				swap->next = aux2->next;
				aux2->next->prev = swap;
			}
			else
				swap->next = NULL;
			aux2->next = swap;
			swap->prev = aux2;
			print_list(*list);
		}
		if (aux2->prev)
		{
			if (aux2->n > aux2->prev->n)
			aux2 = aux2->prev;
		}
	}
}

/**
 * insertion_sort_list - sortea una barbaridad
 * @list: lista linkedxd
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL, *aux2 = NULL;

	if (!list)
		return;
	aux = *list;
	while (aux->next)
	{
		if (aux->n > aux->next->n)
		{
			aux2 = aux->next;
			sorting(list, aux2);
		}
		if (!aux->next)
			break;
		if (aux->n < aux->next->n)
			aux = aux->next;
	}
}
