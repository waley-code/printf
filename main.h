#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);

int _strlen(const char *s);

int _print_string(char *str);

int _print_number(int n);

int _print_format(char format, va_list args);

#endif /* MAIN_H */
