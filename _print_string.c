#include "main.h"

/**
 * _print_string - print a string using the defined functions
 * @str: The string to be printed
 * Return: Length of output string
*/

int _print_string(char *str)
{
	int i = 0;
	int n = _strlen(str);

	for (; i < n; i++)
	{
		_putchar(str[i]);
	}

	return (n);
}
