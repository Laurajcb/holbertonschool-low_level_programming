#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet- Do the alphabet, in lowercase, followed by a new line.
 * Void always return: 0
 * Return: 0
 */

void print_alphabet(void)
{
	char n;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');

}
