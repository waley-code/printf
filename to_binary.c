#include "main.h"

unsigned to_binary(unsigned int n)
{
    //array to store binary number
    int binaryNum[32];
    //counting binary array
    int i = 0;
    while (n > 0) {
        //store of remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    //print of binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        _putchar(binaryNum[j]);
    return (i);
}