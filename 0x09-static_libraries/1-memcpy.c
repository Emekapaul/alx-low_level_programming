#include "main.h"

/**
  *_memcpy - function that copies memory area.
  *@dest: The character to print.
  *@src: The character to copy.
  *@n: The num of integer to print
  *
  *Return: Char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
