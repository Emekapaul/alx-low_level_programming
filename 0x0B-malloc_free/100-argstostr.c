#include "main.h"
#include <stdlib.h>

/**
 *argstostr - Write a function that concatenates all the arguments of your
 *program.
 *@ac: The integer to input
 *@av: This is the aray with double pointer
 *
 *Return: NULL if ac == 0 or av == NULL, Returns a pointer to a new
 *string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *poi;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	poi = malloc(sizeof(char) * l + 1);
	if (poi == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			poi[r] = av[i][n];
			r++;
		}
		if (poi[r] == '\0')
		{
			poi[r++] = '\n';
		}
	}
	return (poi);
}
