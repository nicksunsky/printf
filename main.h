#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_number(va_list ap);
int print_percent(va_list ap __attribute__((unused)));
int _putchar(char c);

/**
 * struct flags_printf - struct conversion to function
 * @c: flag string
 * @f: pointer to func
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;
#endif
