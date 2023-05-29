#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Main entry point.
 * @num: The character to print.
 *
 * Return: Calculated output
 */
int print_last_digit(int num)
{
        int lastDig = (num % 10) + '0';

        return (lastDig);
}

int main(void)
{
	int result = print_last_digit(74737359);
	putchar(result);
	return (0);
}

