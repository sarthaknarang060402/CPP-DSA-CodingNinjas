#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a > 65 && a < 91)
        cout << "1" << endl;
    else if (a > 97 && a < 123)
        cout << "0" << endl;
    else
        cout << "-1";
    return 0;
}
