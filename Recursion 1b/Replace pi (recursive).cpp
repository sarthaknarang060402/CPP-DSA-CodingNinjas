#include <cstring>
void shifter(char input[])
{
    for (int i = strlen(input) - 1; i >= 2; i--)
        input[i + 2] = input[i];
}
void replacePi(char input[])
{

    if (input[0] == '\0')
        return;
    if (input[0] == 'p' && input[1] == 'i')
    {
        shifter(input);
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    }
    else
    {
        replacePi(input + 1);
    }
}