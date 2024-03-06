#include "main.h"
#include <stdio.h>
/**
  *print_array - prints integer array elements
  *@a: the array
  *@n: the number of elements to be printed
  *
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
{
	printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
	i++;
}
	printf("\n");
}
