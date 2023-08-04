#include "main.h"

/**
 * clear_bit - Clears the bit at thespecified index (sets it to 0)
 * @n: Pointer of an unsigned long integer
 * @index: Index of the bit to be cleared
 * Return: 1 or -1
 *
 * Code by 0xOneBeing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
