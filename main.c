#include "main.h"

/**
 *
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *buff;
	size_t buff_size;
	char *cmd;
	int n_line;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			printf("($ )");

			n_line = getline(&buff, &buff_size, NULL);
			if (n_line = -1)
				return (-1);

			av = tokenizer(buff," \t\n", n_line);
			cmd = _getpath(av);

			_execve(cmd, av);
		}
	}
	return (0);
}
