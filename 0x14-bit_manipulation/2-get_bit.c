#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: Number to evaluate.
 * @index: Index to get the values.
 * Return: The value of the bit at index index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_idx;
	const int bits_in_byte = 8;
	int bn;


	max_idx = (sizeof(unsigned long) * bits_in_byte);

	if (index > max_idx)
		return (-1);


	for (; index != 0; index--)
		n >>= 1;

	bn = n & 1;

	return (bn);
}
