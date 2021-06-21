#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the alphabet ten times, in lowercase, followed by a new line.
 * Void always return: 0
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char n;
for (i = 0; i <= 9; i++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
