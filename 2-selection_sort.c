#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, comp, j = 0;
	int smallest, temp;

	while (j < size)
	{
		smallest = array[j];
		for (i = j; i < size; i++)
		{
			if (array[i] < smallest)
			{
				smallest = array[i];
				comp = i;
			}

		}
		temp = array[j];
		array[j] = array[comp];
		array[comp] = temp;
		print_array(array, size);
		j++;
	}
}
