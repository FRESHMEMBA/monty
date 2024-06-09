#include "monty.h"

/*
 *push - adds a new element to a stack
 *@stack: pointer to the head of the stack
 *@new_value: the number to be added to the stack
 *Returns: nothing (void)
 */
void push(stack_t **stack, int new_value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
		exit(EXIT_FAILURE);

	new_node->n = new_value;
	new_node->prev = NULL;
	new_node->next = *stack;

    if (*stack)
	    (*stack)->prev = new_node;

    *stack = new_node;
}
