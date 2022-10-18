#include "main.h"
/**
 * C++ version 0.4 char* style "itoa":
 * Written by Lukás Chmela
 * Released under GPLv3.
 */
char *_itoa(int value, char str[SIZE])
{
	int k = value;
	int i = 0;

	if (k < 0)
	{
		i++;
		str[0] = '-';
		k = k * -1;
		value = value * -1;
	}

	while (k > 0)
	{
		k /= 10;
        i++;
	}

	k = value;

	while (k > 0)
	{
		str[--i] = (k % 10) + '0';
		k /= 10;
	}
	return (str);
}