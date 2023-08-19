#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

char *_getcommand(char *command);
char **str_split(char *command, char *del, int nb_char);

#endif
