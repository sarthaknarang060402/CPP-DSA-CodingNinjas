Node *appendLastNToFirst(Node *head, int n)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    int l = 1;
    // traverse to last node
    for (int i = 0; temp->next != NULL; i++)
    {
        l++;
        temp = temp->next;
    }
    temp->next = head; // step1

    for (int i = 0; i < l - n; i++)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;

    return head;
}