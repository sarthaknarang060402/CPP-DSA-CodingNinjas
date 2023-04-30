#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    if (n >= 0 && n <= 50)
    {

        while (i <= n)
        {
            int k = n;
            while (k >= i + 1)
            {
                cout << " ";
                k--;
            }
            int j = 1;
            while (j <= 2 * i - 1)
            {
                cout << "*";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    else
        return 0;
}