#include <stdio.h>

double _pow(double base, int exponent) {
	double result = 1.0;

	if (exponent < 0)
	{
		base = 1.0 / base;
		exponent = -exponent;
	}

	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return result;
}
