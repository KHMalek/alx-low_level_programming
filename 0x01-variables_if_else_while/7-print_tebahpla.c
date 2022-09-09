#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char CH;

	for (CH = 'z'; CH >= 'a'; CH--)
	{
	putchar(CH);
	}
	putchar('\n');
	return (0);
}
