#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        int colsum = 0;
        for (int i = 0; i < m; i++)
        {
            colsum += A[i][j];
        }
        cout << colsum << " ";
    }
}
