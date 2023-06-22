#include "monty.h"

/**
  * pchar - ..
  * @stack: ...
  * @line_number: ...
  * by noraaaaaaaaaaaaaaaaaaa o fridaaaaaaaaaaaaaa
  * Return: Nothing
  */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PCH_EMP, NULL, line_number, NULL);

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
		handle_error(ERR_PCH_USG, NULL, line_number, NULL);
}
