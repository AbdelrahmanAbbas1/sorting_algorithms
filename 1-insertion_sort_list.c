#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	
	temp = *list;
	while (temp)
	{
		printf((*list)->n);
		temp = temp->next;
		print_list(*list);
	}
}
