#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to number.
 * @index: The index of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurrs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_idx;
	const int bits_in_byte = 8;
	int mark = 1;


	max_idx = (sizeof(unsigned long) * bits_in_byte);

	if (index > max_idx)
		return (-1);

	mark <<= index;
	mark = (~mark);


	*n &= mark;

	return (1);

}
