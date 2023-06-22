#include "monty.h"

/**
 * pall - Prints all the elements of the stack
 * @stack: The stack to print
 * @line_number: ...
 * by nora o frida
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	(void) line_number;

	if (*stack)
	{
		current = *stack;
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
		}
	}
}
