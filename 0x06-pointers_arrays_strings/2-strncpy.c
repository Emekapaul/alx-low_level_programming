#include "main.h"

/**
  *_strncpy - function that copies a string.
  *@dest: The character to print.
  *@src: The character to print.
  *@n: The integer to print.
  *
  *Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
