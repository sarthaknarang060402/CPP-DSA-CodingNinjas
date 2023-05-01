#include <string.h>
using namespace std;
int getCodes(string input, string output[10000])
{
    static int indx = 0;
    if (input.size() == 0)
    {
        indx++;
        return 1;
    }
    string newout = output[indx];
    int subcount = 0;
    string mapping[] = {"", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                        "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u",
                        "v", "w", "x", "y", "z"};
    int number = input[0] - '0';
    output[indx] = newout + mapping[number];
    subcount += getCodes(input.substr(1), output);
    if (input.size() > 1)
    {
        int number2 = (input[0] - '0') * 10 + input[1] - '0';
        if (number2 > 26)
            return subcount;
        output[indx] = newout + mapping[number2];
        subcount += getCodes(input.substr(2), output);
    }
    return subcount;
}