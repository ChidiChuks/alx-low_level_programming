#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: char
 * @src: char
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
