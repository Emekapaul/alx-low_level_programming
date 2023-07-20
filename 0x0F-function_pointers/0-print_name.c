#include "function_pointers.h"

/**
  *print_name - function that prints a name.
  *@name: The string to print.
  *@f: Function pointer.
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
