#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_idx;
	const int bits_in_byte = 8;
	int value = 1;


	max_idx = (sizeof(unsigned long) * bits_in_byte);

	if (index > max_idx)
		return (-1);

	value <<= index;

	*n |= value;

	return (1);
}
