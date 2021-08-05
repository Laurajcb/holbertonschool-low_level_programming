#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint- function that converts binary to unsigned int
 * @b: takes in a conts char string
 * Return: the converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (!b)
		return (0);

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
	}
	return (num);
}