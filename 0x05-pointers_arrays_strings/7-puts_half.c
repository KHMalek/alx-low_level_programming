#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: is a pointer to a char
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i + 1;
	if (j % 2 == 0)
	{
		for (i = j / 2; i < j - 1; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		for (i = (j - 1) / 2; i < j - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
