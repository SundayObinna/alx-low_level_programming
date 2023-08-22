#include"main.h"

void _puts(char *str);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);


/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string parameter to print
 *
 * Code by 0xOneBeing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}


/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: (s1 < *s2)
 *
 * Code by 0xOneBeing
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Return: The number recalled
 *
 * Code by 0xOneBeing
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}


/**
 * _isalpha - Checks for alphabet character
 * @c: character to be checked
 * Return: (1) or (0)
 *
 * Code by 0xOneBeing
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for.
 * Return: A pointer to the matched byte or NULL
 *
 * Code by 0xOneBeing
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
