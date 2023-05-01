#include <string.h>
using namespace std;
void pac(string input, string output)
{
    if (input.size() == 0)
    {
        cout << output << endl;
        return;
    }
    string mapping[] = {"", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                        "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u",
                        "v", "w", "x", "y", "z"};
    string newout = output;
    int number = (int)(input[0]) - 48;
    if (number <= 26)
    {
        output = newout + mapping[number];
        pac(input.substr(1), output);
    }
    if (input.size() != 1)
    {
        int number2 = ((int)input[0] - 48) * 10 + (int)(input[1]) - 48;
        if (number2 <= 26)
        {
            output = newout + mapping[number2];
            pac(input.substr(2), output);
        }
    }
    return;
}
void printAllPossibleCodes(string input)
{
    string output = "";
    pac(input, output);
}
