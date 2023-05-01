Node *swapNodes(Node *head, int i, int j)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    int small, large;
    if (i < j)
    {
        small = i;
        large = j;
    }
    else
    {
        small = j;
        large = i;
    }

    for (int k = small; k > 0 && temp != NULL; k--)
    {
        temp = temp->next;
    }

    Node *first = temp;
    for (int m = large - small; m > 0 && temp != NULL; m--)
    {
        temp = temp->next;
    }
    Node *second = temp;

    int tempdata = first->data;
    first->data = second->data;
    second->data = tempdata;
    return head;
}