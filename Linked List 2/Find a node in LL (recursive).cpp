#include <bits/stdc++.h>
int findNodeRec(Node *head, int n)
{
    if (head == NULL)
        return -1;
    if (head->data == n)
        return 0;
    int val = findNodeRec(head->next, n);
    if (val == -1)
        return -1;
    else
        return val + 1;
}