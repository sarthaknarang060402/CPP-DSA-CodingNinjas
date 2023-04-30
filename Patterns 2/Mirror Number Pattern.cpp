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
        int s = n - 1;
        while (s >= i)
        {
            cout << " ";
            s--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}