#include <stdio.h>

/**
 * main - Prints the alphabet in lowercases but except letter q and e.
 * Void always return: 0
 * Return: 0
 */

int main(void)
{
	int n;
for (n = 97; n <= 122; n++)
{
if (n != 113 && n != 101)
{
putchar(n);
}
}
putchar('\n');

return (0);
}
