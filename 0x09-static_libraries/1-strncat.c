#include "main.h"

/**
  *_strncat - function that concatenates two strings.
  *@dest: The string to print.
  *@src: The string to print.
  *@n: The integer to print.
  *
  *Return: char.
  */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, l2 = 0;

	while (dest[l] != '\0')
	{
		dest[l] = dest[l];
		l++;
	}

	while (src[l2] != '\0')
	{
		if (l2 < n)
		{
			dest[l] = src[l2];
		}
		l2++;
		l++;
	}

	dest[l] = '\0';

	return (dest);
}
