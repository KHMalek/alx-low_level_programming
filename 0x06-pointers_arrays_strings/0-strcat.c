#include "main.h"

int _strlen(char *s);

/**
 * _strcat - concatenate two strings.
 *
 * @dest: is a pointer to a char.
 * @src: is a pointer to a char.
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
int i = _strlen(dest), j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
}

/**
 * _strlen - measure a string leght.
 *
 * @s: is a pointer to a char
 *
 * Return: 0
 */

int _strlen(char *s)
{
int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

return (i);
}
