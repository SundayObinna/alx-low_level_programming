#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - Converts binary number to unsigned integer
 * @b: Pointer to a string containing binary digits
 * Return: Converted decimal number or 0
 *
 * Code by 0xOneBeing
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow;
	unsigned int total;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (pow = 1, total = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			total += pow;
	}

	return (total);
}
