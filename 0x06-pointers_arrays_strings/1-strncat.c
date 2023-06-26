#include "main.h"

/**
  *_strncat - function that concatenates two strings.
  *@dest: The character to print.
  *@src: The character to print.
  *@n: The integer to print.
  */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	
	while (src[len2] && n > 0)
	{
			dest[len1] = src[len2];
			len2++;
			len1++;
			n--;
	}

	dest[len1] = '\0';

	return (dest);
}
