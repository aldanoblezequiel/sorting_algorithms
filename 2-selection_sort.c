#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *selection_sort - selecciona sortea
 *@array: array xd
 *@size: size xd
 */

void selection_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t n, j, minvalue = 0;

	if (!array || size < 2)
		return;
	for (j = 0; j < size; j++)
	{
		minvalue = 0;
		minvalue = j;
		for (n = j; n < size; n++)
		{
			if (array[minvalue] > array[n])
			{
				minvalue = n;
			}
		}
	if (minvalue != j)
	{
		tmp = array[minvalue];
		array[minvalue] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
	}
}
