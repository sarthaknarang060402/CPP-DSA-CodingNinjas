#include <iostream>
using namespace std;

int main()
{
    int n, neww, prev;
    cin >> n;    // 7
    cin >> neww; // 3
    n--;         // 6
    bool isdec = 1, isinc = 0;
    while (n != 0)
    {
        prev = neww; // 3 2 1 2 3
        cin >> neww; // 2 1 2 3 2
        if (neww == prev)
        {
            cout << "false";
            return 0;
        }
        else if (neww < prev)
        {
            if (isdec == 1 && isinc == 0)
            {
                isdec = 1;
            }
            else
            {
                cout << "false";
                return 0;
            }
        }
        else if (neww > prev)
        {
            if (isdec == 1 || isinc == 1)
            {
                isdec = 0;
                isinc = 1;
            }
        }
        else
        {
            cout << "false";
            return 0;
        }
        n--; // 5
    }
    cout << "true";
    return 0;
}
