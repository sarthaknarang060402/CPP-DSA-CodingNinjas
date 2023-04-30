#include <iostream>
using namespace std;
int main()
{
    char a;
    int i;
    a = cin.get();
    int dcount = 0, scount = 0, ccount = 0;
    for (i = 0; a != '$'; i++)
    {
        if (a >= '0' && a <= '9')
            dcount++;
        else if (a == ' ' || a == '\t' || a == '\n')
            scount++;
        else
            ccount++;
        a = cin.get();
    }
    cout << ccount << ' ' << dcount << ' ' << scount << endl;
}