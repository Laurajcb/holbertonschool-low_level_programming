#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all numbers from n to 98.
 *@n:number that is goint to be iterating
 * Return: a plus b the addition of 2 numbers.
 */

void print_to_98(int n)
{
if (n >= 98)
{
	while (n > 98)
	printf("%d, ", n--);
	printf("%d\n", n);
}
else
{
	while (n < 98)
	printf("%d, ", n++);
	printf("%d\n", n);
}
}
