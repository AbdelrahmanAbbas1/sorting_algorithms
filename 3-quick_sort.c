#include "sort.h"

/**
 * swap - Swap two elements in an array
 * @array: The array that contains the elements
 * @size: The size of the array
 * @a: A pointer to the first element
 * @b: A pointer to the second element
 */
void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array(array, size);
	}
}



/**
 * quick_sort_re - Sorts an array of integers recursively using partitions
 * @array: The array to be sorted
 * @size: The size fo the array
 * @low: The start of the partition
 * @high: The end of the partition
 */
void quick_sort_re(int *array, size_t size, int low, int high)
{
	int pivot_index;
	int j, i;
	int pivot;

	if (low < high)
	{
		j = low - 1;
		pivot = array[high];
		for (i = low; i < high; i++)
		{
			if (array[i] < pivot)
			{
				j++;
				swap(array, size, &array[i], &array[j]);
			}
		}
		swap(array, size, &array[j + 1], &array[high]);
		pivot_index = j + 1;

		quick_sort_re(array, size, low, pivot_index - 1);
		quick_sort_re(array, size, pivot_index + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL || size <= 1)
		return;
	quick_sort_re(array, size, low, high);
}
