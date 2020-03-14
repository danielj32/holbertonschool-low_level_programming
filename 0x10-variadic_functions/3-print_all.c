#include "variadic_functions.h"
/**
 *print_all - print argument data types
 *@format: string struct
 */
void print_all(const char * const format, ...)
{
	int l, k;
	va_list lista;

	print print_name[] =

	{
		{"c", caracter},
		{"i", integer},
		{"f", flotante},
		{"s", string},
		{NULL, NULL}
	};

	va_start(lista, format);
	l = 0;
	while (format[l])
	{
		k = 0;
		while (print_name[k].pt)
		{
			if (*(print_name[k].st) == format[l])
			{
				(*print_name[k].pt)(lista);
				if (format[l + 1] != '\0')
					printf(", ");
			}
			k++;
		}
		l++;
	}
	printf("\n");
	va_end(lista);
}
/**
 *integer - search int
 *@lista: list
 */

void integer(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 *caracter - search char
 *@lista: list
 */

void caracter(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 *flotante - search float
 *@lista: list
 */

void flotante(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 *string - search string
 *@lista: list
 */

void string(va_list lista)
{
	printf("%s", va_arg(lista, char *));
}

