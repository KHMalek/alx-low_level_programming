#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int X;

	for (X = 0; X < 10; X++)
	{
	putchar ((X % 10) + '0');
	if (X == 9)
	continue;
	else
	putchar (',');
	putchar (' ');
	}
	putchar('\n');
	return (0);
}
