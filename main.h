#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

char *_getpath(char **command);
char **tokenizer(char *command, char *del, int nb_char);
void _execve(char **token_arr, char *cmd);
void _printenv();
void _exit_man(char **token_arr, char *buff);

#endif
