#include "main.h"

/**
  * binary_to_uint - Write a function that converts a binary number to an
  * unsigned int.
  * @b: The value to be converted to unsigned int.
  *
  * Return: the converted number, or 0 if there is one or more chars in the
  * string b that is not 0 or 1, b is NULL.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, twos = 1;
	int len = 0;

	if (!b)
		return (0);
	for (; b[len]; len++)
		if (!(b[len] >= '0' && b[len] <= '9'))
			return (0);
	for (len -= 1; len >= 0; len--, twos <<= 1)
		if (b[len] == '1')
			num += twos;
	return (num);
}
