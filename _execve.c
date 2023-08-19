#include "main.h"


void _execve(char *_fullpath, char **argv)
{	
	if(execve(_fullpath, argv, NULL) == -1)
	       perror(" Error");
}


