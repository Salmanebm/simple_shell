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
void _execve(char *_fullpath, char **argv);

#endif
