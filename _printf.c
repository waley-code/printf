#include "main.h"
#include <stdarg.h>

int _matchSpec(char c);

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
	int x = 0;
	char c;
	va_list args;
	int sp = 0;
	int si = 0;

	va_start(args, format);

	for (; i < _strlen(format); i++)
	{
		c = format[i];
		if (c == '%')
		{
			x = i;
			for (x++; x < _strlen(format); x++)
			{
				if (format[x] == '-')
					si = 2;
				else if (format[x] == '+')
					si = 1;
				if (format[x] >= '0' && format[x] <= '9')
					sp = format[x] - '0';
				if (_matchSpec(format[x]))
				{
					n += _print_format(format[x], args, sp, si);
					i = x;
					break;
				}
				n++;
			}
			continue;
		}
		n++;
		_putchar(c);
	}

	va_end(args);
	return (n);
}

int _matchSpec(char c)
{
	char arr[6] = "cs%dbi";
	int i = 0;

	for (; i < 6; i++)
	{
		if (c == arr[i])
		{
			return (1);
		}
	}

	return (0);
}
