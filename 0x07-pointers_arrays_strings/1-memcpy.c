#include "main.h"

/**
 * _memcpy - Write a function that copies memory area
 *
 * @dest: is a pointer to a char
 * @src: is a pointer to a char
 * @n: is an unsigned int
 *
 * Return: Returns the transformed pointer
 *
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
