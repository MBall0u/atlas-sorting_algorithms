#include "sort.h"
/**
 * insertion_sort_list - see below
 * Description - iterates through a doubly linked list
 * and moves the given node to is place in the sorted
 * section
 * @list: the given unsorted list
 * Return: Void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *main = *list, *temp;

	main = main->next;
	while (main)
	{
		if (main->prev && main->n < main->prev->n)
		{
			while (main->prev && main->n < main->prev->n)
			{
				temp = main->prev;
				if (main->next)
					main->next->prev = temp;
				if (temp->prev)
					temp->prev->next = main;
				temp->next = main->next;
				main->prev = temp->prev;
				main->next = temp;
				temp->prev = main;
				if (!main->prev)
					*list = main;
			}
			print_list(*list);
		}
		else
			main = main->next;
	}
}
