#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array- funtion that reverse the array
 *@a: pointer to array
 *@n:length
 *
 * Return: 0 is void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;
	int mid = 0;

	if (n % 2 == 0)
	{
		mid = n / 2;

	}
	else
	{
		mid = (n - 1) / 2;
	}

	for (i = 0; i < mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
