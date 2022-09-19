#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * @str: is a pointer to a char
 *
 * Return: 0
 */

void _puts(char *str)
{
int i;

while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
