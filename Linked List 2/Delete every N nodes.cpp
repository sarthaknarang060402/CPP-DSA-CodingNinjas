
Node *skipMdeleteN(Node *head, int M, int N)
{
    if (M == 0)
        return NULL;
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *tail = NULL;
    for (; temp != NULL;)
    {
        for (int i = M; i > 0 && temp != NULL; i--)
        {
            tail = temp; //
            temp = temp->next;
        }
        for (int i = N; i > 0 && temp != NULL; i--)
        {
            temp = temp->next;
        }
        tail->next = temp;
    }
    return head;
}
