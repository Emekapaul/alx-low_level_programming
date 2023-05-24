#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a = 0;

	while (a <= z)
	{
		write(1, a, 1);
		a++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
