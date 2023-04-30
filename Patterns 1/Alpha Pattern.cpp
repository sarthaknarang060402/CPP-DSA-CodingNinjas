#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (!(n >= 0 && n <= 50))
        return 0;
    int i = 1;
    char L = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << L;
            j++;
        }
        cout << endl;
        L++;
        i++;
    }
    return 0;
}