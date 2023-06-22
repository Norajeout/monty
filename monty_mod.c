#include "monty.h"

/**
 * mod - Prints all the elements of the stack
 * @stack: The stack to print
 * @line_number: ...
 * by nwira o frida
 * Return: Nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int go = 0, b = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_MOD_USG, NULL, line_number, NULL);

	go = temp->n;

	if (go == 0)
		handle_error(ERR_DIV_ZRO, NULL, line_number, NULL);

	b = temp->next->n;
	temp->next->n = b % go;
	*stack = temp->next;
	free(temp);
}
