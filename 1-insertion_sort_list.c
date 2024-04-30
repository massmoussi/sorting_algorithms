#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubl linked list of ints
 *                       using the inser srt algor.
 * @list: A pntr to the head of a doubly-linked list of ints.
 *
 * Description: Prints the list after each swap.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		insert = current->prev;

		while (insert != NULL && current->n < insert->n)
		{
			if (insert->prev != NULL)
				insert->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = insert;

			insert->next = current->next;
			current->prev = insert->prev;
			current->next = insert;
			insert->prev = current;

			print_list((const listint_t *)*list);
			insert = current->prev;
		}
	}
}
