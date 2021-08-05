#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: takes in a conts char string
 * Return: the converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, binary = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			binary += 1 << count;

		count++;
	}

	return (binary);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: the length a int
  */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
