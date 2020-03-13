#include "variadic_functions.h"
/**
 *sum_them_all - sum elements
 *@n: elements
 *Return: suma
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int suma = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		suma += va_arg(valist, int);
	va_end(valist);

	return (suma);
}
