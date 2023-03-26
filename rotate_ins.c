#include "monty.h"

/**
 * _rotl - the function used to rotate first element to bottom
 *
 * @doubly: the head of the list
 * @cline: number
 */
void _rotl(stack_t **doubly, unsigned int cline)
{
	stack_t *first = NULL;
	stack_t *second = NULL;

	(void)cline;
	if (*doubly == NULL)
	{
		return;
	}
	if ((*doubly)->next == NULL)
	{
		return;
	}
	first = (*doubly)->next;
	second = *doubly;
	for (; second->next != NULL; second = second->next)
		;
	first->prev = NULL;
	second->next = *doubly;
	(*doubly)->next = NULL;
	(*doubly)->prev = second;
	*doubly = first;
}

/**
 * _rotr - used to revers stack
 *
 * @doubly: list head
 * @cline: number of line
 */
void _rotr(stack_t **doubly, unsigned int cline)
{
	stack_t *first = NULL;
	(void)cline;

	if (*doubly == NULL)
	{
		return;
	}
	if ((*doubly)->next == NULL)
	{
		return;
	}
	first = *doubly;
	for (; first->next != NULL; first = first->next)
		;
	first->prev->next = NULL;
	first->next = *doubly;
	first->prev = NULL;
	(*doubly)->prev = first;
	*doubly = first;
}
