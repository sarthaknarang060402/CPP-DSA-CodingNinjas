#include <iostream>
using namespace std;
typedef long long int ll;
const ll m = 1e9 + 7;

int modAdd(ll a, ll b) { return (int)((a % m + b % m) % m); }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n + 1]{0};
        arr[0] = 1;
        // 1 1 2 4 7 13
        // for(int i = 0; i <= n; i++) {
        //   if(i < n) arr[i + 1] = modAdd(arr[i + 1], arr[i]);
        //   if(i < n - 1) arr[i + 2] = modAdd(arr[i + 2], arr[i]);
        //   if(i < n - 2) arr[i + 3] = modAdd(arr[i + 3], arr[i]);
        // }
        arr[1] = 1;
        arr[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            arr[i] = modAdd(arr[i - 1], modAdd(arr[i - 2], arr[i - 3]));
        }

        cout << arr[n] << endl;

        delete[] arr;
    }
    return 0;
}
