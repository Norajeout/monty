#include "monty.h"

/**
  * rotr - ...
  * @stack: ...
  * @line_number: ...
  * by nora and frida
  *
  * Return: ...
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = NULL;
	(void) line_number;

	if (*stack && (*stack)->next)
	{
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		last->prev->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
