#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char c;
	int i, a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	for (i = 0; i < a / 2; i++)
	{
		c = s[i];
		s[i] = s[b];
		s[b--] = c;
	}
}
