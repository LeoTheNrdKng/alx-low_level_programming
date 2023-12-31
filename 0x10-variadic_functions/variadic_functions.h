#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>

void print_c(va_list element);
void print_i(va_list element);
void print_f(va_list element);
void print_s(va_list element);

/**
 * struct format_t - Struct format_t
 *
 * @f: Format.
 * @print: Function print.
 */
typedef struct format_t
{
	char *f;
	void (*print)(va_list);
} format_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
