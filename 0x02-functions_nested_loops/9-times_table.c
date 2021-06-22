#include <stdio.h>
#include "holberton.h"

/**
 *times_table-(void)prints the 9 times table, starting with 0.
 * void
 * Return: 0
 */

void times_table(void)
{
	int s;
	int n;
	int product;
for (s = 0; s < 10; s++)
{
	_putchar('0');
	for (n = 1; n <=  10; n++)
{
	_putchar(',');
	_putchar(' ');

	product = s * n;

if (product <= 9)

	_putchar(32);
	else

	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
}
_putchar('\n');

}

}
