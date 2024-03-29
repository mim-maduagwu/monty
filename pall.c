#include "monty.h"

/**
 * print_all - prints all vals in a stacnk
 * @stack: the stack
 * @line_number: the current line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	UNUSED(line_number);

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
