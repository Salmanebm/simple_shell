#include "main..h"

/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return: Always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}
