#include <string>
using namespace std;
void permu(string input, string output[], string out, int &ind)
{
    if (input.size() == 0)
    {
        output[ind++] = out;
        return;
    }
    string newout = out;
    for (int i = 0; i < input.size(); i++)
    {
        if (i == 0)
        {
            out = newout + input[i];
            permu(input.substr(1), output, out, ind);
        }
        else if (i == input.size() - 1)
        {
            out = newout + input[i];
            permu(input.substr(0, i), output, out, ind);
        }
        else
        {
            out = newout + input[i];
            permu(input.substr(0, i) + input.substr(i + 1, input.size() - i - 1), output, out, ind);
        }
    }
}
int returnPermutations(string input, string output[])
{
    string out = "";
    int ind = 0;
    permu(input, output, out, ind);
    return ind;
}
