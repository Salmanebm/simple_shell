#include "main.h"

char **tokenizer(char *buff, char *del, int nb_char)
{       
	char *token = NULL, **toks = NULL;
	char *buff_cp;
	int i = 0, j = 0;

	buff_cp = malloc(sizeof(char) * nb_char); 

	strcpy(buff_cp, buff);
	token = strtok(buff_cp, del);
	while(token)
	{	i++;
		token = strtok(NULL, del);				
	}
	i++;
	toks = malloc(sizeof(char *) * i);
	token = strtok(buff, del);
	while (token)
	{	toks[j] = token;
		token = strtok(NULL, del);
		j++;
	}
	toks[j] = NULL;
	return (toks);
}
