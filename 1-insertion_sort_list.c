#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *temp_next;
	listint_t *current;
	listint_t *sorted;

	sorted = NULL;
	current = *list;
	while (current)
	{
		print_list(*list);
		temp_next = current->next;
		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			current->prev = NULL;
			if (sorted != NULL)
				sorted->prev = current;
			sorted = current;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && temp->next->n < current->n)
				temp = temp->next;

			current->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = current;
			temp->next = current;
			current->prev = temp;
		}
		current = temp_next;
	}
	*list = sorted;
}
