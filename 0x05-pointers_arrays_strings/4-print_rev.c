#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @c: is a pointer to a char
 *
 * Return: 0
 */

void print_rev(char *c)
{
	int i, l;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	l = i - 1;
	for (i = l; i >= 0; i--)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
