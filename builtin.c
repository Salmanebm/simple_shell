#include "main.h"
/**
 * _exitb - Exit Statue Shell
 * @command: Parsed Command
 * @buff: User Input
 * @av:Program Name
 * @s:Excute Count
 * Return: Void (Exit Statue)
 */
void  _exitb(char **command, char *buff, char **av, int s)
{
	int st, i = 0;

	if (command[1] == NULL)
	{
		free(buff);
		free(command);
		exit(EXIT_SUCCESS);
	}
	while (command[1][i])
	{
		if (_ischar(command[1][i++]) != 0)
		{
			_prerror(av, s, command);
			break;
		}
		else
		{
			st = _toint(command[1]);
			free(buff);
			free(command);
			exit(st);
		}
	}
}


/**
 * _cdir - Change Dirctorie
 * @command: Parsed Command
 * @er: Statue Last Command Excuted
 * Return: 0 Succes 1 Failed (For Old Pwd Always 0 Case No Old PWD)
 */
int _cdir(char **command, __attribute__((unused))int er)
{
	int val = -1;
	char cwd[PATH_MAX];

	if (command[1] == NULL)
		val = chdir(getenv("HOME"));
	else if (_strcmp(command[1], "-") == 0)
	{
		val = chdir(getenv("OLDPWD"));
	}
	else
		val = chdir(command[1]);

	if (val == -1)
	{
		perror("Error");
		return (-1);
	}
	else if (val != -1)
	{
		getcwd(cwd, sizeof(cwd));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", cwd, 1);
	}
	return (0);
}
/**
 * pr_env - Display Enviroment Variable
 * @cmnd:Parsed Command
 * @c:Statue of Last command Excuted
 * Return:Always 0
 */
int pr_env(__attribute__((unused))char **cmnd, __attribute__((unused))int c)
{
	size_t i;
	int lt;

	for (i = 0; environ[i] != NULL; i++)
	{
		lt = _strlen(environ[i]);
		write(1, environ[i], lt);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
/**
 * echo - Excute Echo Cases
 * @s:Statue Of Last Command Excuted
 * @command: Parsed Command
 * Return: Always 0 Or Excute Normal Echo
 */
int echo(char **command, int s)
{
	char *path;
	unsigned int  pid = getppid();

	if (_strncmp(command[1], "$?", 2) == 0)
	{
		print_num_in(s);
		PRINT("\n");
	}
	else if (_strncmp(command[1], "$$", 2) == 0)
	{
		print_num(pid);
		PRINT("\n");

	}
	else if (_strncmp(command[1], "$PATH", 5) == 0)
	{
		path = _getenv("PATH");
		PRINT(path);
		PRINT("\n");
		free(path);

	}
	else
		return (print_echo(command));

	return (1);
}
