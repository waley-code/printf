#include "main.h"
#include <stdarg.h>
/**
 * _print_format - print to stdout with specified format
 * @format: conversion specifier
 * @args: arguments to be passed
 * @sp: length of string
 * @si: mathematical sign
 * Return: length of output
*/
int _print_format(char format, va_list args, int sp, int si)
{
	int n = 0;
	static char result[SIZE];

	switch (format)
		{
		case 'c':
			_putchar(va_arg(args, int));
			n++;
			break;

		case 's':
			n += _print_string(va_arg(args, char *), sp, si);
			break;

		case '%':
			_putchar('%');
			n++;
			break;

		case 'd':
			_itoa(va_arg(args, int), result);
			n += _print_string(result, sp, si * 3);
			break;

		case 'b':
			_itoa(to_binary(va_arg(args, int)), result);
			n += _print_string(result, sp, si * 3);
			break;

		case 'i':
			_itoa(va_arg(args, int), result);
			n += _print_string(result, sp, si * 3);
			break;

		default:
			break;
		}

	return (n);
}
