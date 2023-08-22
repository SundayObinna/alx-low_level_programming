#include "main.h"

char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int  _islower(int alpha);


/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be appended to destination
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the resulting string dest.
 *
 * Code by 0xOneBeing
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}


/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 *
 * Code by 0xOneBeing
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}


/**
 * _strlen - Checks the length of a string.
 * @s: String to check.
 * Return: int length of the string
 *
 * Code by 0xOneBeing
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}


/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.*
 * Return: A pointer to the resulting string dest.
 *
 * Code by 0xOneBeing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}


/**
 * _islower - Prints the alphabets in lower cas
 * @alpha: Number or an alphabet
 * Return: (0) are manua (1)
 *
 * Code by 0xOneBeing
 */

int  _islower(int alpha)
{
	if (alpha >= 'a' && alpha  <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
