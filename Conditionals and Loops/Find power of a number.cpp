#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> x >> n;
    int answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer *= x;
    }
    cout << answer;
    return 0;
}
