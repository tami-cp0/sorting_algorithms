#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * using insertion sort algorithm.
 * @list: A double pointer to the head of the list.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pointer = NULL;
	listint_t *temp_node = NULL;


	if (*list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	pointer = *list;

	while (pointer)
	{
		while (pointer->next && (pointer->n > pointer->next->n))
		{
			temp_node = pointer->next;
			pointer->next = temp_node->next;
			temp_node->prev = pointer->prev;

			if (pointer->prev)
				pointer->prev->next = temp_node;

			if (temp_node->next)
				temp_node->next->prev = pointer;

			pointer->prev = temp_node;
			temp_node->next = pointer;

			if (temp_node->prev)
				pointer = temp_node->prev;
			else
				*list = temp_node;

			print_list(*list);
		}
		pointer = pointer->next;
	}
}
