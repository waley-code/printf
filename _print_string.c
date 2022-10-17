#include "main.h"

/**
 * _print_string - print a string using the defined functions
 * @str: The string to be printed
 * Return: 0 for success, 1 for error
*/

int _print_string(char *str)
{
	int i = 0;

	for (; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
