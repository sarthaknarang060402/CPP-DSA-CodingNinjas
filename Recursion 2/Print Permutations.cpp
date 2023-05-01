#include <iostream>
#include <string>
using namespace std;
void permu(string input, string output)
{
    if (input.size() == 0)
    {
        cout << output << endl;
        return;
    }
    string newout = output;
    for (int i = 0; i < input.size(); i++)
    {
        if (i == 0)
        {
            output = newout + input[i];
            permu(input.substr(1), output);
        }
        else if (i == input.size() - 1)
        {
            output = newout + input[i];
            permu(input.substr(0, i), output);
        }
        else
        {
            output = newout + input[i];
            permu(input.substr(0, i) + input.substr(i + 1, input.size() - i - 1), output);
        }
    }
}
void printPermutations(string input)
{
    string output = "";
    permu(input, output);
}
