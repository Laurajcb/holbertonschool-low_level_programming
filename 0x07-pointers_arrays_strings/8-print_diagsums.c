#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - print sum of two diagonals
 *@a: pointer to array
 *@size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int add1 = 0;
	int add2 = 0;

	for (i = 0; i < size; i++)
	{
	add1 = add1 + a[(size * i) + i];
	add2 = add2 + a[(size * i) + (size - i - 1)];
	}

	printf("%d, %d\n", add1, add2);

}
