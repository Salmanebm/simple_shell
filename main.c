#include "main.h"

/**
 *
 */
int main(int ac, char **av)
{
	char *buff = NULL;
	size_t buff_size = 0;
	char *cmd;
	int n_line;

	pid_t pid;
	int status = 0;
	(void) ac;

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			write(1, "$ ", 2);
			n_line = getline(&buff, &buff_size, stdin);
			if (n_line == -1)
			{	write(1, "\n", 1);
				exit(0);
			}	
			av = tokenizer(buff," \t\n", n_line);
			if (av == NULL)
			{
				free(buff);
				exit(0); 
			}
			if(strcmp(av[0],"exit") == 0)
			{	
				free(buff);
				exit(1);
				
			}
			pid = fork();
			if (pid == 0)
			{
				cmd = _getpath(av);
				if (cmd == NULL)
				{	
					printf("command not exist\n");
				}
				else
				{	
					_execve(av, cmd);
				}
				exit(0);
			}
			else
				 wait(&status);
		}
	}
	return (0);
}
