#include "main.h"

/**
 * set_bit - Sets the bit at the specified index to 1
 * @n: Pointer of an unsigned long integer
 * @index: Index of the bit to be set
 *
 * Return: 1 or -1
 *
 * Codde by 0xOneBeing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
