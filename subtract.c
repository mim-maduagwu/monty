#include "monty.h"

/**
 * sub - minus toop elements
 *  @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int diff;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	diff = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = diff;
}
