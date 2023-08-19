#include "main.h"

char **str_split(char *command, char *del, int nb_char)
{       
	char *token, **toks;
	int i = 0;

	toks = malloc(sizeof(char *) * nb_char);
	token = strtok(command, del);
	while(token)
	{
		toks[i] = token;
		token = strtok(NULL, del);				
		i++;
	}
       toks[i] = NULL;
       return (toks);
}
