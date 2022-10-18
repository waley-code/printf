#include "main.h"
#include <stdarg.h>

int _matchSpec(char c);
void slice(const char *str, char *result, int start, int end);

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
	char result[SIZE];

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
				if (_matchSpec(format[x]))
				{
					slice(format, result, i + 1, x);
					sp = _atoi(result);
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

/**
 * _matchSpec - match to specifiers
 * @c: Character
 * Return: 1 or 0 for if matched or not
*/

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

/**
 * slice - get part of a string
 * @str: string to splice
 * @result: spliced string
 * @start: index to start from
 * @end: final index
 * Return: Nothing
*/

void slice(const char *str, char *result, int start, int end)
{
	_strncpy(result, str + start, end - start);
}
