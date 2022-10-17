#include "main.h"
#include <stdarg.h>

/**
 * _print_format - print to stdout with specified format
 * @format: conversion specifier
 * @args: arguments to be passed
 * Return: 0 (Success) or 1 (Error)
*/

int _print_format(char format, va_list args)
{
	switch (format)
		{
		case 'c':
			_putchar(va_arg(args, int));
			break;

		case 's':
			_print_string(va_arg(args, char *));
			break;

		case '%':
			_putchar('%');

		default:
			break;
		}

	return (0);
}
