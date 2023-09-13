#include "function_pointers.h"

/**
  * print_name - Write a function that prints a name.
  * @name: The name to print.
  * @f: The function pointer.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
