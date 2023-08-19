#include "main.h"

char *_getpath(char **buff)
{
	char *path = getenv("PATH");
	char *token;
	char **argv;
	char *full_cmd;
	struct stat st;
	int i = 0;


	

	token = strtok(path, ":");
 


	for(i = 0; argv[i]; i++)
	{
		full_cmd = malloc(strlen(argv[i]) + strlen(buff[0]) + 2);
		strcpy(full_cmd, argv[i]);
		strcat(full_cmd, "/");
		strcat(full_cmd, buff[0]);				
		strcat(full_cmd, "\0");
		if (stat(full_cmd, &st) == 0)
                   return (full_cmd);												                free(full_cmd);
																        }
	return (buff[0]);
}

