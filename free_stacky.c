#include "monty.h"

/**
  * frees_stack - ...
  * by nwiea o ngy3a
  * Return: ...
  */
void frees_stack(void)
{
	stack_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp)
		{
			head = head->next;
			free(temp);
			temp = head;
		}
	}
}
