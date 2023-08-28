#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Head of linked listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tail = NULL;

	for (; head != NULL;)
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
