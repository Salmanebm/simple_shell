#include "main.h"

/**
 *
 */
int main(__attribute__((unused)) int ac, char **av)
{
	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			printf("($ )");

			n_line = getline(&buff, &buff_size, NULL);
			if (n_line = -1)
				return (-1);

			argv = tokenizer();

			_execve(argv, cmd);
		}
	}
	return (0);
}
