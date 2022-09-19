#include "main.h"

/**
 * _strcpy - unction that copies the string pointed to by src to the buffer
 *
 * @dest: is a pointer to a char
 *
 * @src: is a pointer to a char
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
char buff[1000];
int i = 0, j, pos = 0;

while (*(src + i) != '\0')
{
	buff[i] = *(src + i);
	i++;
}

for (j = 0; *(src + j) != '\0' ; j++)
{
	*(dest + pos) = buff[j];
	pos++;
}
dest[j] = '\0';
return (dest);
}
