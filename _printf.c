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
	char c;

	for (; i < _strlen(format); i++)
	{
		c = format[i];
		_putchar(c);
		n++;
	}

	return (0);
}
