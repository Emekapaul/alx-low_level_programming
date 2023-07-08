#include "main.h"

/**
  *_strncpy - function that copies a string.
  *@dest: The string to print.
  *@src: The string to print.
  *@n: The integer to print.
  *
  *Return: char.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}

	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
