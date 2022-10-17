#include "main.h"
#include <stdarg.h>

/**
 * _print_format - print to stdout with specified format
 * @format: conversion specifier
 * @args: arguments to be passed
 * Return: length of output
*/

int _print_format(char format, va_list args)
{
	int n = 0;
	char *out;

	switch (format)
		{
		case 'c':
			_putchar(va_arg(args, int));
			n++;
			break;

		case 's':
			out = va_arg(args, char *);
			n += _print_string(out);
			break;

		case '%':
			_putchar('%');
			n++;
			break;

		case 'd':
			n += _print_number(va_arg(args, int));
			break;
		
		case 'b':
			n += to_binary(va_arg(args, unsigned int));
			break;

		default:
			break;
		}

	return (n);
}
