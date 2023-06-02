#include "main.h"

/**
  * _isdigit - function that checks for a digit (0 through 9).
  *@c: The charact to print.
  *
  *Return: On success 1
  *On error, 0 is returned.
  */
int _isdigit(int c)
{
	int one = 1;
	int zero = 0;

		if (c >= '0' && c <= '9')
		{
			return (one);
		}
		else
		{
			return (zero);
		}
	
}
