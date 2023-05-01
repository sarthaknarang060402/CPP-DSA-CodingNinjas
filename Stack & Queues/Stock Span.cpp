#include <stack>
int *stockSpan(int *price, int size)
{
    stack<int> s;
    s.push(0);
    int *arr = new int[size];
    arr[0] = 1;

    for (int i = 1; i < size; i++)
    {
        while (!s.empty() && price[s.top()] < price[i])
            s.pop();

        if (s.empty())
            arr[i] = i + 1;
        else
            arr[i] = i - s.top();

        s.push(i);
    }
    return arr;
}