#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip to get from
 * one number to another.
 * @n: Number 1.
 * @m: Number 2.
 * Return: The number of bits flips to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;
	short int bn, bm;

	for (c = 0; (n != 0) || (m != 0); n >>= 1, m >>= 1)
	{
		bn = n & 1;
		bm = m & 1;

		if (bn != bm)
			c++;
	}

	return (c);
}
