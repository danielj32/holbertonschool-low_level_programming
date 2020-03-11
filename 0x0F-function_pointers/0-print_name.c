#include "function_pointers.h"
/**
 *print_name - print name
 *@name: pointer char
 *@f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
