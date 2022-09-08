#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char CH[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	 , sizeof(CH));
	return (1);
}
