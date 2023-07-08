#include "main.h"

/**
  *_puts - function that prints a string, followed
  *by a new line, to stdout
  *@str: The character to print.
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
