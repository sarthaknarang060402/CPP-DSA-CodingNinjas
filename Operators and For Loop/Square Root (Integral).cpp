#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxroot = 0;
    for (int i = 1; i * i <= n; i++)
    {
        maxroot = i;
    }
    cout << maxroot;
}
