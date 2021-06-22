#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer -prints the last digit of a number.
 * void
 * Return: 0
 */

void jack_bauer(void)
{
	int h;
	int m;

for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
	if (h <= 9)
{
	printf("0%d", h);
}
else
{
	printf("%d", h);
}

	if (m <= 9)
{
	printf(":0%d\n", m);
}
else
{
	printf(":%d\n", m);
}
}
}
}
