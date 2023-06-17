#include "main.h"
/**
  *times_table - function that prints the 9 times table.
  */
void times_table(void)
{
	int vt = 0, ht;

	while (vt <= 9)
	{
		ht = 0;
		while (ht <= 9)
		{
			if (ht == 9 && (vt * ht) / 10 + '0' == '0')
			{
				_putchar(' ');
				_putchar((vt * ht) % 10 + '0');
			}
			else if (ht == 9)
			{
				_putchar((vt * ht) / 10 + '0');
				_putchar((vt * ht) % 10 + '0');
			}
			else if (ht == 0 && (vt * ht) / 10 + '0' == '0')
			{
				_putchar((vt * ht) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((vt * ht) / 10 + '0' == '0')
			{
				_putchar(' ');
				_putchar((vt * ht) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((vt * ht) / 10 + '0');
				_putchar((vt * ht) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			ht++;
		}
	_putchar('\n');
	vt++;
	}
}
