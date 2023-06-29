#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a : the array we gonna reverse
 * @n: the number of elements
 */

void reverse_array(int *a, int n)
{
	int j, i, aide;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		aide = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = aide;
	}
}
