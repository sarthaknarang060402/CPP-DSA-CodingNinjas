// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    int answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer *= x;
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0; // 12
    for (int i = 0; n > 0; i++)
    {
        ans += (n % 2) * power(10, i);
        n /= 2;
    }
    cout << ans;
    return 0;
}
