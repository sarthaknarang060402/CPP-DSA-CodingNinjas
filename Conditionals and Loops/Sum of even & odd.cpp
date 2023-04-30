#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (!(n >= 0 && n <= 100000000))
        return 0;
    int a;
    int e = 0, o = 0;
    while (n != 0)
    {
        a = n % 10;
        if (a % 2 == 0)
            e += a;
        else
            o += a;
        n /= 10;
    }
    cout << e << " " << o;
}
