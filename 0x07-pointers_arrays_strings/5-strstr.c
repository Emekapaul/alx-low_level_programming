#include "main.h"

/**
  *_strstr - function that locates a substring.
  *@haystack: The string to print.
  *@needle: The string to scan.
  *
  *Return: char.
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	i++;
	}

	return (0);
}
