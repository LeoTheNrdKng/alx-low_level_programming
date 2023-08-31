#include "main.h"

/**
 * _strlen - Counts the length of a string.
 * @s: String.
 * Return: Length.
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int idx;
	unsigned int num = 0;
	unsigned int k = 1;

	if (b == NULL)
		return (0);

	idx = _strlen(b) - 1;

	for (; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '1')
			num += k;

		k *= 2;
	}

	return (num);
}
