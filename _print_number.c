#include "main.h"

/**
  * _print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Length of output
  */
int _print_number(int n)
{
	unsigned int k = n;

	int y = 0;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
		y++;
	}

	k /= 10;
	y++;

	if (k != 0)
		_print_number(k);

	_putchar((unsigned int) n % 10 + '0');
	return (y);
}
