#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char CH;

	for (CH = 'a'; CH <= 'z'; CH++)
	{
	if (CH == 'e' || CH == 'q')
	continue;
	else
	 putchar (CH);
	}
	putchar ('\n');
	return (0);
}
