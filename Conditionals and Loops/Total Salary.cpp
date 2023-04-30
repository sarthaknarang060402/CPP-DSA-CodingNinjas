#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double ts, al, b, d, pf, h;
    char gr;
    cin >> b >> gr;
    if (!(b >= 0 && b <= 7500000))
        return 0;
    if (gr == 'A')
        al = 1700;
    else if (gr == 'B')
        al = 1500;
    else
        al = 1300;
    d = 50 * b / 100;
    h = 20 * b / 100;
    pf = 11 * b / 100;
    ts = b + d + h + al - pf;
    cout.precision(10);
    cout << round(ts);
    return 0;
}
