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

	while (*(str + i) != '\0')
	i++;

	if (i % 2 != 0)
		for (j = ((i + 1) / 2); *(str + j) != '\0'; j++)
			_putchar(*(str + j));
	else if (i % 2 == 0)
		for (j = (i / 2); *(str + j) != '\0'; j++)
			_putchar(*(str + j));
_putchar('\n');
}
