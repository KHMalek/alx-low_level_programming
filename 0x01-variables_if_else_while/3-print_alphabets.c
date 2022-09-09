#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char CH1;
	char CH2;

	for (CH1 = 'a'; CH1 <= 'z'; CH1++)
	{
	putchar (CH1);
	}
	for (CH2 = 'A'; CH2 <= 'Z'; CH2++)
	{
	putchar (CH2);
	}
	putchar ('\n');
	return (0);
}
