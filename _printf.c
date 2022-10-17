#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to stdout
 * @format: The format of the output
 *
 * Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int n = 0;
	char c, next;
	va_list args;
	int skipNext = 0;

	va_start(args, format);
	n++;
	for (; i < _strlen(format); i++)
	{
		if (skipNext)
		{
			skipNext = 0;
			continue;
		}
		c = format[i];
		if (c == '%')
		{
			next = format[i + 1];
			skipNext = 1;
			_print_format(next, args);
			continue;
		}
		_putchar(c);
	}

	va_end(args);
	return (n);
}
