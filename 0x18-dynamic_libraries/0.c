#include "main.h"

int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _isdigit(int value);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _isupper - Checks if uppercase.
 * @c: character to check.
 * Return: (1) or (0).
 *
 * Code by 0xOneBeing
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}


/**
 * *_memset - Fills memory with a constant byte
 * @s: Pointer to put constant.
 * @b: The constant.
 * @n: Max bytes to use
 * Return: s
 *
 * Code by 0xOneBeing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * *_strcat - Concatenates @src to @dest.
 * @src: The source string to append to @dest
 * @dest: The destiation string to be concatenated upon
 * Return: Pointer to resulting string
 *
 * Code by 0xOneBeing
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}


/**
 * _isdigit - Checks wether a number passed as an argument is digit number
 * @value: Argument to check
 * Return: (1) or (0)
 *
 * Code by 0xOneBeing
 */
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"

/**
 * *_memcpy - Copies memory area.
 * @dest: Memory area
 * @src: Source
 * @n: Length of src
 * Return: Pointer to destination
 *
 * Code by 0xOneBeing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
