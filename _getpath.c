#include "main.h"

char *_getcommand(char *command)
{
	char *path = getenv("PATH");
	char *token;
	char *full_cmd;
	struct stat st;

	
	token = strtok(path, ":");
	while(token)
	{
		full_cmd = malloc(strlen(token) + strlen(command) + 2);
		strcpy(full_cmd, token);
		strcat(full_cmd, "/");
		strcat(full_cmd, command);
																	                if (stat(full_cmd, &st) == 0)
																	                        return (full_cmd);
																	                free(full_cmd);
																	                token = strtok(NULL,":");
																	        }
      return (NULL);
}

