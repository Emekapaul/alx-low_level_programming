#include <stdio.h>
#include <stdarg.h>
#include "string.h"

/**
  *print_all -  function that prints anything.
  *@format: list of types of arguments passed to the function.
  */
void print_all(const char * const format, ...)
{
	char *str;
	int i = 0;
	int n = strlen(format);
	va_list p;

	va_start(p, format);

	while (i < n)
	{
		if (format[i] == 'c')
		{
			printf("%c, ", (char)va_arg(p, int));
		}

		else if (format[i] == 'i')
		{
			printf("%d, ", va_arg(p, int));
		}

		else if (format[i] == 'f')
		{
			printf("%f, ", va_arg(p, double));
		}

		else if (format[i] == 's')
		{
			str = va_arg(p, char *);

			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
		}
	i++;
	}

	va_end(p);

	printf("\n");
}
