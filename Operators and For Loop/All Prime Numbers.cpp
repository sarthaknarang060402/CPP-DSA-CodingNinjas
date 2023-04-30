#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << i << endl;
    }
    return 0;
}
