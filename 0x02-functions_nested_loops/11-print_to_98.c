#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natural numbers.
 *
 * @n: n is an int
 *
 * Return: 0
 */
void print_to_98(int n)
{
int c;

if (n < 98)
{
for (c = n; c <= 98; c++)
{
if (c == 98)
printf("%d\n", c);
else
printf("%d, ", c);
}
}

if (n > 98)
{
for (c = n; c >= 98; c--)
{
if (c == 98)
printf("%d\n", c);
else
printf("%d, ", c);
}
}

else
{
if (n == 98)
{
printf("%d\n", n);
}
}
}
