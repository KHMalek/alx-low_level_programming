#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int X;
	char CH;

	for (X = 0; X <= 9; X++)
	{
	putchar ((X % 10) + '0');
	}
	for (CH = 'a'; CH <= 'f'; CH++)
	{
	putchar (CH);
	}
	putchar ('\n');
	return (0);
}
