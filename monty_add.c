#include "monty.h"

/**
 * add - Prints all the elements of the stack
 * @stack: The stack to print
 * @line_number: ...
 * by nwira o frida
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int nog = 0, nwi = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_ADD_USG, NULL, line_number, NULL);

	nog = temp->n;
	nwi = temp->next->n;
	temp->next->n = nog + nwi;
	*stack = temp->next;
	free(temp);
}
