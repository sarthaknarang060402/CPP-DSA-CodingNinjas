#include <cmath>
int number(int *input, int size) // this will convert array to number
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        num += input[i] * (pow(10, size - i - 1)); // 698
    }
    return num;
}

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int num1, num2;
    num1 = number(input1, size1);
    num2 = number(input2, size2);

    int sum = num1 + num2; // 01290%10000=0
    int outsize;           // 5
    if (size1 > size2)
        outsize = size1 + 1;
    else
        outsize = size2 + 1;
    for (int i = 0; i < outsize; i++)
    {
        output[outsize - i - 1] = sum % 10;
        sum /= 10;
    }
}