#include "main.h"

/**
 * reverse_array - Swaps integers wih pointers.
 *
 * @a: is a pointer to an int.
 * @n: is an int..
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int arr[1000];
int i = 0, k;

	while (i < n)
	{
		arr[i] = a[i];
		i++;
	}

	for (k = 0; k < n; k++)
	{
		a[k] = arr[i - 1];
		i--;
	}
}
