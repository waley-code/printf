#include "main.h"

/**
 * _print_string - print a string using the defined functions
 * @str: The string to be printed
 * @sp: length of string
 * @si: mathematical sign
 * Return: Length of output string
*/

int _print_string(char *str, int sp, int si)
{
	int i = 0;
	int n = _strlen(str);
	int x = 0;
	int lead = 0;
	int trail = 0;

	if ((si == 2) || (si == 6))
		trail = sp - n;
	else
		lead = sp - n;

	if (((si % 3) == 0) && (si > 0))
		lead--;

	if (sp > n)
	{
		for (; x < lead; x++)
			_putchar(' ');
	}
	if ((si == 3) && (str[0] != '-'))
		_putchar('+');

	for (; i < n; i++)
	{
		_putchar(str[i]);
	}

	if (sp > n)
	{
		for (; x < trail; x++)
			_putchar(' ');
	}

	return (n);
}
