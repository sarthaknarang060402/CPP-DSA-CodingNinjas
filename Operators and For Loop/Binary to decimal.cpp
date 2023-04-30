#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dec = 0;
    for (int i = 0; n > 0; i++)
    {
        dec += (n % 10) * pow(2, i);
        n /= 10;
    }
    cout << dec;
    return 0;
}