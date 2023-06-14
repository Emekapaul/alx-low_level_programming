#include "main.h"

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char *put = "_putchar";

	for (; *(put + 0) != '\0'; put++)
	{
		_putchar(*put);
	}
	_putchar('\n');
	return (0);
}
