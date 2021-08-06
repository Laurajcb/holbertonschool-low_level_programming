#include "main.h"
/**
 * flip_bits - find number of bits to flip from one number to another
 * @n: first integer
 * @m: second integer
 * Return: (bits) number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 0, count = 0;

	bit = n ^ m;
	while (bit)
	{
		if (bit & 1)
			count++;

		bit >>= 1;
	}

	return (count);
}
