#include "main.h"

/**
* to_binary - converts to binary.
* @n: Value argument to chonvert.
* Return: number of caracters.
*/

unsigned to_binary(unsigned int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        _putchar(binaryNum[j]);
    return (i);
}