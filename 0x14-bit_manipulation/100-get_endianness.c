#include "main.h"

/**
 * get_endianness - Determines endianness of the system
 * Return: 0 or 1
 *
 * Code by 0xOneBeing
 */

int get_endianness(void)
{
	int number;

	number = 1;

	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
