#include "main.h"

/**
 *
 */
void _exit_man(char **token_arr, char *buff)
{
	if (strcmp(token_arr[0], "exit") == 0)
	{
		free(buff);
		exit(1);
	}
}
void print_error(char *input, char **argv)
{

	PRINTER(argv[0]);
	PRINTER(": ");
	PRINTER("qwerty: ");
	PRINTER(input);
	PRINTER(": not found\n");
}
