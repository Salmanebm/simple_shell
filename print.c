#include "main.h"
/**
 * print_num -Print Unsigned Int Putchar
 * @n: Unisigned Integer
 * Return: Void
 */
void print_num(unsigned int n)
{
	unsigned int x = n;

	if ((x / 10) > 0)
		print_num(x / 10);

	_putchar(x % 10 + '0');
}
/**
 * print_num_in -Print Number Putchar
 * @n:Integer
 * Return: void
 */
void print_num_in(int n)
{
	unsigned int s = n;

	if (n < 0)
	{
		_putchar('-');
		s = -s;
	}
	if ((s / 10) > 0)
		print_num(s / 10);

	_putchar(s % 10 + '0');
}
