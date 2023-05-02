#include <queue>
// K is the person of interest
int buyTicket(int *arr, int n, int k)
{

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        q.push(i); // -> Indices of Persons
    }

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]); // -> Priority of persons in maxHeap
    }

    int timeTaken = 0;

    // This loop runs until the person of interest is in the front and his
    // priority is highest
    while (q.front() != k or pq.top() != arr[q.front()])
    {
        // if a person with less priority is standing in front send him to the back
        // of queue
        if (pq.top() > arr[q.front()])
        {
            q.push(q.front());
            q.pop();
        }
        else if (pq.top() == arr[q.front()])
        {
            pq.pop();
            q.pop();
            timeTaken++;
        }
    }

    return timeTaken +
           1; // Plus 1 to account for person of interest getting the ticket
}