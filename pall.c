#include "monty.h"

/*
 * pall - prints all the items in a stack
 * @stack: pointer to the stack to be printed
 * Returns: Nothing (void).
 */
void pall(stack_t **stack)
{
    stack_t *head = *stack;
    if (*stack != NULL)
    {
        while ((*stack) != NULL)
        {
            fprint("%d\n", (*stack)->n);
            *stack = (*stack)->next;
        }

        *stack = head;
    }
}