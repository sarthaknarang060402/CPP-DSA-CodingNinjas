#include <cmath>
#include <cstring>
int stringToNumber(char input[])
{
    int number;
    if (input[0] == '\0')
        return number;
    number = (input[0] - '0') * pow(10, strlen(input) - 1) + stringToNumber(input + 1);
}