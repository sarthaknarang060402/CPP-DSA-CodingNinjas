#include <bits/stdc++.h>
#include <vector>

class PriorityQueue
{
    vector<int> pq;

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }

        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
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

    int removeMin()
    {

        int pin = 0;

        int minele = 0;
        int ans = pq[pin];
        int size = pq.size();
        swap(pq[size - 1], pq[0]);
        pq.pop_back();
        int newsize = pq.size();
        while (minele != size - 1)
        {
            int lin = (2 * pin) + 1; // left child
            int rin = (2 * pin) + 2; // right child
            if (lin < newsize && rin < newsize)
            {
                int minimum = min(pq[pin], min(pq[lin], pq[rin]));
                if (minimum == pq[pin])
                    return ans;
                else if (minimum == pq[rin])
                    minele = rin;
                else
                    minele = lin;
                swap(pq[minele], pq[pin]);
                pin = minele;
                continue;
            }
            if (lin < newsize && (rin >= newsize))
            {
                int minimum = min(pq[pin], pq[lin]);
                if (minimum == pq[pin])
                    return ans;
                else
                    minele = lin;
                swap(pq[minele], pq[pin]);
                pin = minele;
                continue;
            }
            return ans;
        }
        return ans;
    }
};