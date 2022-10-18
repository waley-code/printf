/**
 * _pow - exponent of a number
 * @x: base number
 * @y: power
 * Return: x to the power of y
*/

int _pow(int x, int y)
{
	int i = 0;
	int res = 1;

	for (; i < y; i++)
		res = res * x;

	return (res);
}
