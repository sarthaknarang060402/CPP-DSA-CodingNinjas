#include <string>
using namespace std;

int keypad(int num, string output[])
{
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n = num % 10;
    string current = mapping[n];
    if (n == 0 || n == 1)
    {
        output[0] = current;
        return 1;
    }
    int smallerProblem = keypad(num / 10, output);
    int totalCount = smallerProblem * (current.size());
    int copies = current.size();
    int k = smallerProblem;
    while (copies != 1)
    {
        for (int i = 0; i < smallerProblem; i++)
        {
            output[i + k] = output[i];
        }
        k += smallerProblem;
        copies--;
    }

    for (int i = 0, j = 0; j < current.size(); j++)
    {
        for (int l = 0; l < smallerProblem; l++, i++)
        {
            output[i] = output[i] + current[j];
        }
    }
    return totalCount;
}
