#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tempSpace;

	while (head)
	{
		tempSpace = head->next;
		free(head->str);
		free(head);
		head = tempSpace;
	}
}
