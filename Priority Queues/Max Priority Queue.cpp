#include <bits/stdc++.h>
class PriorityQueue
{
    // Declare the data members here
    vector<int> pq;

public:
    PriorityQueue()
    {
        // Implement the constructor here
        // pq.size()=0;
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element)
    {
        // Implement the insert() function here
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] > pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int getMax()
    {
        // Implement the getMax() function here
        if (pq.size() == 0)
            return INT_MIN;
        return pq.front();
    }

    int removeMax()
    {
        // Implement the removeMax() function here
        int pin = 0;

        int maxele = 0;
        int ans = pq[pin];
        int size = pq.size();
        swap(pq[size - 1], pq[0]);
        pq.pop_back();
        int newsize = pq.size();
        while (maxele != size - 1)
        {
            int lin = (2 * pin) + 1; // left child
            int rin = (2 * pin) + 2; // right child
            if (lin < newsize && rin < newsize)
            {
                int maximum = max(pq[pin], max(pq[lin], pq[rin]));
                if (maximum == pq[pin])
                    return ans;
                else if (maximum == pq[rin])
                    maxele = rin;
                else
                    maxele = lin;
                swap(pq[maxele], pq[pin]);
                pin = maxele;
                continue;
            }
            if (lin < newsize && (rin >= newsize))
            {
                int maximum = max(pq[pin], pq[lin]);
                if (maximum == pq[pin])
                    return ans;
                else
                    maxele = lin;
                swap(pq[maxele], pq[pin]);
                pin = maxele;
                continue;
            }
            return ans;
        }
        return ans;
    }

    int getSize()
    {
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function here
        if (pq.size() == 0)
            return 1;
        return 0;
    }
};