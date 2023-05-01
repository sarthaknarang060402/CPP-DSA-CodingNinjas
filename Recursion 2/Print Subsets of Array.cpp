#include <string>
using namespace std;
void subsetarr(int input[], int size, string output, int outsize)
{
    if (size == 0)
    {
        cout << output << endl;
        return;
    }
    subsetarr(input + 1, size - 1, output, outsize);
    subsetarr(input + 1, size - 1, output + to_string(input[0]) + " ", outsize + 1);
}
void printSubsetsOfArray(int input[], int size)
{
    string output = "";
    int outsize = output.size();
    subsetarr(input, size, output, outsize);
}