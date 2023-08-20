#include "main.h"

char **tokenizer(char *buff, char *delimiter, int n_line)
{       
	char *token = NULL, **token_arr = NULL;
	char *buff_cp;
	int token_count = 0, j = 0;

	buff_cp = malloc(sizeof(char) * n_line + 1); 

	strcpy(buff_cp, buff);

	token = strtok(buff, delimiter);
	while(token)
	{	
		token_count++;
		token = strtok(NULL, delimiter);				
	}
	token_count++;

	token_arr = malloc(sizeof(char *) * token_count);

	token = strtok(buff_cp, delimiter);
	while (token)
	{	
		token_arr[j] = malloc(sizeof(char) * strlen(token));
		strcpy(token_arr[j], token);
		token = strtok(NULL, delimiter);
		j++;
	}
	token_arr[j] = NULL;

	return (token_arr);
}
