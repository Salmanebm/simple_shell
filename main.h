#ifndef MAIN_H
#define MAIN_H

/****** Libraries ******/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

/****** String Functions ******/

int _putchar(char c);
int _strlen(char *s);
int _atoi(char *s);
void _puts(char *s);
int _strcmp(char *s1, char *s2);

char *_getpath(char **command);
char **tokenizer(char *command, char *del, int nb_char);
void _execve(char **token_arr, char *cmd);
void _printenv();
void _exit_man(char **token_arr, char *buff);

#endif
