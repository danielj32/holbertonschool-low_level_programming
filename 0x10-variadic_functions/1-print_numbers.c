#include "variadic_functions.h"
/**
 *print_numbers - print the numbers
 *@separator: char pointer
 *@n: num of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list listl;
	unsigned int j;

	if (separator == NULL)
		separator = "";

	va_start(listl, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(listl, int));
		if (j < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(listl);
}
