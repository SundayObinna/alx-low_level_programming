#include <unistd.h>
#include "main.h"

char *_strstr(char *haystack, char *needle);
int _abs(int value);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _putchar(char c);


/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: A pointer to the beginning
 * of located substring or NULL
 *
 * Code by 0xOneBeing
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}


/**
 * _abs - returns the absolute value of a number given to it
 * @value: a given value
 * Return: (0) or (1)
 *
 * Code by 0xOneBeing
 */

int _abs(int value)
{
	if (value < 0)
	{
		return (-(value));
	}
	else
	{
		return  (value);
	}
}


/**
 * *_strcpy -  Copies the string pointed to by src
 * @dest: Destination
 * @src: Source
 * Return: Pointer to `dest
 *
 * Code by 0xOneBeing
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}


/**
 * _atoi - Convert a string to an integer
 * @s: The string to be comverted
 * Return: The integer value of the comverted string
 *
 * Code by 0xOneBeing
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}


/**
 * _putchar - Prints a char at a time
 * @c: The character to print
 * Return: (c)
 *
 * Code by 0xOneBeing
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
