#include "main.h"

/**
  *_strcat - function that concatenates two strings.
  *@dest: The string to print.
  *@src: The string to print.
  *
  *Return: char
  */
char *_strcat(char *dest, char *src)
{
	int l = 0, l2 = 0;

	while (dest[l] != '\0')
	{
		dest[l] = dest[l];
		l++;
	}

	while (src[l2] != '\0')
	{
		dest[l] = src[l2];
		l++;
		l2++;
	}

	dest[l] = '\0';

	return (dest);
}
