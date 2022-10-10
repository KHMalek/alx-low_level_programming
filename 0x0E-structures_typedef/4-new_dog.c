#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; s++)
{
	i++;
}

return (i);
}

/**
 * _strncpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char.
 *
 * @src: is a pointer to a char.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src)
{
int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Creates function with name and owner copies
 *
 * @name: Name parameter
 * @age: Age parameter
 * @owner: Owner parameter
 *
 * Return: Returns nothing
**/

dog_t *new_dog(char *name, float age, char *owner)

