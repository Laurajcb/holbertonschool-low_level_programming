#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit -prints the last digit of a number.
 * @n : is the number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;
if (digit < 0)
{
	digit = -digit;
}
_putchar(digit + '0');
return (digit);
}
