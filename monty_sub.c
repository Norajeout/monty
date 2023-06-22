#include "monty.h"

/**
 * sub - Prints all the elements of the stack
 * @stack: The stack to print
 * @line_number: ...
 * by nora and frida
 * Return: Nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_SUB_USG, NULL, line_number, NULL);

	a = temp->n;
	b = temp->next->n;
	temp->next->n = b - a;
	*stack = temp->next;
	free(temp);
}
