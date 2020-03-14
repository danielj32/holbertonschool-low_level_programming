#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H

#include <stdio.h>

#include <stdarg.h>
/**
 *struct print_name - name of structure
 *@st: var name
 *@pt: pointer
 *print - alias
 */

typedef struct print_name
{
	char *st;
	void (*pt)(va_list);
} print;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void integer(va_list i);

void caracter(va_list i);

void flotante(va_list i);

void string(va_list i);


#endif
