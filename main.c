#include "main.h"

/**
 *
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *buff = NULL;
	size_t buff_size;
	char *cmd;
	int n_line;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			printf("($) ");

			n_line = getline(&buff, &buff_size, stdin);
			if (n_line = -1)
				return (-1);

			av = tokenizer(buff," \t\n", n_line);
			cmd = _getpath(av);
			
			int id = fork();
			if (id == 0)
			{
				_execve(av, cmd);
			}
		}
	}
	return (0);
}
