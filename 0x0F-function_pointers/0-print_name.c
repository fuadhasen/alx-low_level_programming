#include "function_pointers.h"

/**
 * print_name - call back
 * @name: name
 * @f: func pointer
 *
 * Return: no
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
