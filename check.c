#include "monty.h"
/**
  * check_args_num - Checks the number of passed args
  * @argn: Number of args
  * by ngy3a and nwiiira
  * Return: Nothing
  */
void check_args_num(int argn)
{
	if (argn != MIN_ARGS)
		handle_error(ERR_ARG_USG, NULL, 0, NULL);
}
/**
  * check_access_rights - Checks if the file can be readed
  * @filename: The pathname of the file
  *
  * Return: Nothing
  */
void check_access_rights(char *filename)
{
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}
/**
  * check_push_param - Checks if the file can be readed
  * @param: ...
  *
  * Return: Nothing
  */
int check_push_param(char *param)
{
	if (param == NULL || check_digits(param) == 0)
		return (ERR_PUSH_USG);
	return (VALID_PARM);
}
/**
  * check_digits - ...
  * @s: ...
  *
  * Return: ...
  */
int check_digits(char *s)
{
	int status = 1;

	while (*s != '\0')
	{
		if (s[0] == 45)
		{
			++s;
			continue;
		}
		if (isdigit(*s) == 0)
		{
			status = 0;
			return (status);
		}
		++s;
	}
	return (status);
}
