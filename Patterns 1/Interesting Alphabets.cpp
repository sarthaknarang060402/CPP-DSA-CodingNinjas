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
        char L = 'A' + n - i;
        while (j <= i)
        {
            cout << L;
            j++;
            L++;
        }
        cout << endl;
        i++;
    }
    return 0;
}