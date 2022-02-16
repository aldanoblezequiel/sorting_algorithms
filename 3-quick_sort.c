#include <stdio.h>
#include "sort.h"

/**
 * quickR3cursion - quick shot
 * @start: start xd
 * @end: end xd
 * @size: the size xd
 * @slice: slice xd
 * Return: ashe xd
 */
void quickR3cursion(size_t start, size_t end, size_t size, int *slice)
{
	size_t posToSwap = start - 1, pivot, pos;
	int swamp = 0;

	if (!slice || end < 2)
		return;
	pivot = end - 1;
	if (slice[pivot] == slice[start])
		return;

	for (pos = start; pos < end - 1; pos++)
	{
		if (slice[pos] < slice[pivot])
		{
			posToSwap++;
			if (slice[pos] < slice[posToSwap])
			{
				swamp = slice[posToSwap];
				slice[posToSwap] = slice[pos];
				slice[pos] = swamp;
				print_array(slice, size);
			}
		}
	}
	posToSwap++;
	if (slice[posToSwap] > slice[pivot])
	{
		swamp = slice[posToSwap];
		slice[posToSwap] = slice[pivot];
		slice[pivot] = swamp;
		print_array(slice, size);
	}
	if (start < posToSwap - 1)
		quickR3cursion(start, posToSwap, size, slice);
	if (posToSwap + 1 < end - 1)
		quickR3cursion(posToSwap + 1, end, size, slice);
}


/**
 * quick_sort - quicksortea xd
 * @array: the array xd
 * @size: size xd
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	quickR3cursion(0, size, size, array);
}
