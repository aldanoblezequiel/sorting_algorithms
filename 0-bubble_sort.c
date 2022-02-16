#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * bubble_sort - sorting a bubble xd
 * @array: array xd
 * @size: the sizes
 */

void bubble_sort(int *array, size_t size)
{
	size_t n, j, aux, flag = 0;

	if (!array)
		exit(0);
	for (j = 0; array && j < size;)
	{
		flag = 0;
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1] && array[n + 1])
			{
				aux = array[n + 1];
				array[n + 1] = array[n];
				array[n] = aux;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
