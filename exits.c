#include "shell.h"
/**
 * _strncpy - copies a string
 * @dest: the destination string to be copied to
 * @src: the source string
 * @n: the amount of characters to be copie
 * Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
/**
 * _strchr - locates a character in a string
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
