#include <iostream>
using namespace std;
int main()
{
    int S, E, W;
    cin >> S >> E >> W;
    int cel;
    while (S <= E)
    {
        cel = ((S - 32) * 5) / 9;
        cout << S << " " << cel << endl;
        S = S + W;
    }
    return 0;
}