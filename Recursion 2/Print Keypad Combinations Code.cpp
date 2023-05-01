#include <iostream>
#include <string>
using namespace std;

void printer(int num, string output)
{
    if (num == 0)
    {
        cout << output << endl;
        return;
    }
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int unitplace = num % 10;
    int smallerNumber = num / 10;
    string current = mapping[unitplace];
    for (int i = 0; i < current.size(); i++)
    {
        printer(smallerNumber, current[i] + output);
    }
}
void printKeypad(int num)
{
    printer(num, "");
}
