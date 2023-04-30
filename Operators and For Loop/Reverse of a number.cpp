#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int answer = 0;
    for (; n > 0;)
    {
        answer *= 10;
        answer += n % 10;
        n /= 10;
    }
    cout << answer;
    return 0;
}