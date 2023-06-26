#include "main.h"

/**
  *_strcat - function that concatenates two strings.
  *@dest: The string to print.
  *@src: The string to print.
  *
  *Return: char.
  */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}

	dest[len1] = '\0';

	return (dest);
}
