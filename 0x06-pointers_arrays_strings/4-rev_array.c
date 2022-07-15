#include "main.h"

/**
 * reverse_array - reverse content of an array of integers
 * @a: array of integers
 * @n: number of elements of array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int tmp, index;
	for (index = n - 1; index > n/2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
