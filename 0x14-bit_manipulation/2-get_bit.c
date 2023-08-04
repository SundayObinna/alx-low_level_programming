#include <stdio.h>
#include "main.h"

/**
 * get_bit - Retrieves the value of a bit
 * @n: Input unsigned long int number
 * @index: Index of the bit to retrieve.
 * Return: Value of the bit at the given index
 *
 * Code by 0xOneBeing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int uint;

	if (n == 0 && index < 64)
		return (0);

	for (uint = 0; uint <= 63; n >>= 1, uint++)
	{
		if (index == uint)
		{
			return (n & 1);
		}
	}

	return (-1);
}
