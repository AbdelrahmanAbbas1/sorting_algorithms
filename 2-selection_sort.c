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
	int swap;

	while (j < size)
	{
		smallest = array[j];
		swap = 0;
		for (i = j; i < size; i++)
		{
			if (array[i] < smallest)
			{
				smallest = array[i];
				comp = i;
				swap++;
			}

		}
		if (swap > 0)
		{
			temp = array[j];
			array[j] = array[comp];
			array[comp] = temp;
			print_array(array, size);
		}
		j++;
	}
}
