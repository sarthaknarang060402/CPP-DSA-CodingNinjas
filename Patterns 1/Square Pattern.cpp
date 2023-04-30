#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    if (!(n >= 0 && n <= 50))
        return 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
