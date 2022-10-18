#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#ifndef SIZE
#define SIZE 32

int _printf(const char *format, ...);

int _putchar(char c);

int _strlen(const char *s);

int _print_string(char *str, int sp, int si);

int _print_number(int n);

int _print_format(char format, va_list args, int sp, int si);

int to_binary(int n);

int _pow(int x, int y);

char *_itoa(int value, char result[SIZE]);

int _atoi(char *s);

char *_strncpy(char *dest, const char *src, int n);

#endif

#endif /* MAIN_H */
