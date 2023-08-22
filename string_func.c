#include "main.h"

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
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _atoi - convert a string to an int
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
int i, n, x;

	i = 0, x = 1, n = 0;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}

	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		n = (n * 10) + x * ((s[i]) - '0');
		i++;
	}
	return (n);
}

/**
 * _puts - print a string
 * @s: string
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strcmp - Compare Two String
 * @s1: String 1
 * @s2:	String 2
 * Return: 0 if they're the same
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i, len1, len2;
	
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (!s1 || !s2)
		return (1);
	if (len1 != len2)
		return (1);

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
			continue;
	}
	return (cmp);
}

/**
 * _strcpy - Copie Source To Destination Char
 * @dest:Destination
 * @src:Source
 * Return: Copie Of Char *
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
/**
 * _strcat - Concat Two String
 * @dest:First String
 * @src:Second String
 * Return:First String + Second String Char *
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
