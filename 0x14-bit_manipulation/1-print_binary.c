#include <stdio.h>
#include "main.h"

/**
 * print_binary - This prints the binary equivalent of a decimal number
 * @n: Decimal number to be converted and printed in binary.
 *
 * Code by 0xOneBeing
 */

void print_binary(unsigned long int n)
{
	int s;
	int count;
	unsigned long int current;

	count = 0;

	for (s = 63; s >= 0; s--)
	{
		current = n >> s;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
