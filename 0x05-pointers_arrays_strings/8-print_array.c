#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
{
		return;
}
	for (i = 0; i < n; i++)
{
		printf("%d", a[i]);
		if (i < n - 1)
{
			printf(", ");
}
}
	printf("\n");
}