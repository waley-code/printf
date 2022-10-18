#include "main.h"

/**
* to_binary - converts to binary.
* @n: Value argument to convert.
* Return: binary value.
*/

int to_binary(int n)
{
	int binaryNum = 0;
	int i = 0;
	int x = 1;

	if (n == 0)
		return (0);

	if (n < 0)
	{
		x = -1;
		n = n * -1;
	}

	while (n > 0)
	{
		binaryNum += (n % 2) * _pow(10, i);
		n = n / 2;
		i++;
	}

	binaryNum = binaryNum * x;
	return (binaryNum);
}
