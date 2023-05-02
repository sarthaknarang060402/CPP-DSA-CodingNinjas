#include <queue>
void findMedian(int *arr, int n)
{
    // Write your code here
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maxHeap.push(arr[i]);
            cout << arr[i] << " ";
        }
        else
        {
            if (arr[i] < maxHeap.top())
            {
                maxHeap.push(arr[i]);
            }
            else
            {
                minHeap.push(arr[i]);
            }

            if ((int)(maxHeap.size() - minHeap.size()) > 1)
            {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else if ((int)(minHeap.size() - maxHeap.size()) > 1)
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }

            int size = maxHeap.size() + minHeap.size();

            if (size & 1)
            {
                if (maxHeap.size() > minHeap.size())
                {
                    cout << maxHeap.top() << " ";
                }
                else
                {
                    cout << minHeap.top() << " ";
                }
            }
            else
            {
                cout << (maxHeap.top() + minHeap.top()) / 2 << " ";
            }
        }
    }
}