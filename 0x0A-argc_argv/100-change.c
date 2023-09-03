#include <stdio.h>
#include <stdlib.h>

/**
 *main - Write a program that prints the minimum number of coins to make
 *change for an amount of money.
 *@argc: Argument count
 *@argv: This id the of argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number;
	int j;
	int result;
	int coins[] = {25, 10, 5, 2, 1};

	/* The conditional statement if argc is unequal to 2 */
	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	number = atoi(argv[1]);

	result = 0;

	/* condional statement */
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	/* loop condion */
	for (j = 0; j < 5 && number >= 0; j++)
	{
		while (number >= coins[j])
		{
			result++;
			number -= coins[j];
	}
	}

	printf("%d\n", result);
	return (0);
}
