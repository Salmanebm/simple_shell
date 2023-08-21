#include "main.h"


void _printenv()
{	extern char **environ;
	int i = 0;
	
	for (i = 0; environ[i]; i++)
	{	
		printf("%s\n", environ[i]);
	}
}
