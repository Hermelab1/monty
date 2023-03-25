#include "monty.h"
/**
 * _queue - sets the format of the data to a queue (FIFO)
 *
 * @head: head of the linked list
 * @n: line number;
 */
void _queue(stack_t **head, unsigned int n)
{
	(void)head;
	(void)n;
	vglo.lifo = 0;
}
/**
 * _stack - sets the format fo the data to a stack (LIFO)
 *
 * @head: head of the linked list
 * @n: line number;
 */
void _stack(stack_t **head, unsigned int n)
{
	(void)head;
	(void)n;
	vglo.lifo = 1;
}
/**
 * _add - adds the top two elements of the stack
 *
 * @head: head of the linked list
 * @n: line number;
 */
void _add(stack_t **head, unsigned int n)
{
	int i = 0;
	stack_t *first = NULL;

	first = *head;
	for (; first != NULL; first = first->next, i++)
		;
	if (i < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", n);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	first = (*head)->next;
	first->next += (*head)->next;
	_pop(head, n);
}
/**
 * _nop - doesn't do anythinhg
 *
 * @head: head of the linked list
 * @n: line number;
 */
void _nop(stack_t **head, unsigned int n)
{
	(void)head;
	(void)n;
}
/**
 * _sub - subtracts the top element to the second top element of the stack
 *
 * @doubly: head of the linked list
 * @cline: line number;
 */
void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;
	for (; aux != NULL; aux = aux->next, m++)
		;
	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}
