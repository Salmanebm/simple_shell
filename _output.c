#include "main.h"
/**
 *  _prerror - Print Custome Error
 * @av:Program Name
 * @c:Error Count
 * @command:Command
 * Return: Void
 */
void _prerror(char **av, int c, char **command)
{
	char *er = _itoa(c);

	PRINT(av[0]);
	PRINT(": ");
	PRINT(er);
	PRINT(": ");
	PRINT(command[0]);
	PRINT(": Illegal number: ");
	PRINT(command[1]);
	PRINT("\n");
	free(er);
}
