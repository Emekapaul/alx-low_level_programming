#include <unistd.h>
#include "_putchar.c"

/**
 * _putchar - holds
 * print_alphabet - prints
 * @char c: Expect
 * @return: Returns
 *
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
