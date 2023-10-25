#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a double lined list
 * @a: The first node to be swapped
 * @b: The second node to be swapped
 */
void swap_nodes(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - Sorting a doubly linked list in an ascending order
 * @list: A pointer to the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;
		while (temp && temp->prev)
		{
			if (temp->prev->n > temp->n)
			{
				swap_nodes(temp->prev, temp);
				if (temp->prev == NULL)
					*list = temp;
				print_list(*list);
			}
			else
				temp = temp->prev;
		}

	}
}
