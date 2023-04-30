#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (!(n >= 0 && n <= 50))
        return 0;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int p = i;
        while (j <= i)
        {
            cout << p;
            j++;
            p--;
        }
        cout << endl;
        i++;
    }
    return 0;
}