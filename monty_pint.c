#include "monty.h"

/**
 * pint - ...
 * @stack: The stack to ...
 * @line_number: ...
 * by nora o ngy3a
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PINT_USG, NULL, line_number, NULL);
	printf("%d\n", (*stack)->n);
}
