#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: c is a variable name
 *
 * Return: 0
 */

int _isupper(int c)
{
if (c >= 97 && c <= 122)
return (0);
if (c >= 65 && c <= 90)
return (1);

return (0);
}
