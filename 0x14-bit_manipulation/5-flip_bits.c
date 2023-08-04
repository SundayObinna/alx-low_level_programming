#include "main.h"

/**
 * flip_bits - Determines number of bits needed to flip
 * to convert one number to another
 * @n:The first number
 * @m: The second number
 * Return: The count of bits to be flipped
 *
 * Code by 0xOneBeing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
