#include "variadic_functions.h"
/**
 *print_strings - print a string
 *@separator: ,
 *@n: integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int j;
	char *pt;

	if (separator == NULL)
		return;

	va_start(strings, n);

	for (j = 0; j < n; j++)
	{
		pt =  va_arg(strings, char *);
		printf("%s", pt);
		if (j < (n - 1))
			printf("%s", separator);
		if (pt == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(strings);
}

