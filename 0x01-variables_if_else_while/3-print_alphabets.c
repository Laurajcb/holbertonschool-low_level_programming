#include <stdio.h>

/**
 * main - Prints the alphabet in lowercaseand uppercases
 * Void always return: 0
 * Return: 0
 */

int main(void)
{
	int n;
for (n = 97; n <= 122; n++)
{
putchar(n);
}

for (n = 65; n <= 90; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
