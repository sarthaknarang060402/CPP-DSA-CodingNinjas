Node *reverseLL(Node *head)
{
    Node *current = head;
    Node *nxt = NULL;
    Node *prv = NULL;

    while (current != NULL)
    {
        nxt = current->next;
        current->next = prv;
        prv = current;
        current = nxt;
    }
    head = prv;
    return head;
}

bool isPalindrome(Node *head)
{
    Node *temp = head;
    int length = 0;

    for (; temp != NULL;)
    {
        length++;
        temp = temp->next;
    }
    // cout<<length;
    temp = head;
    for (int i = 0; i < (length + 1) / 2; i++)
    {
        temp = temp->next;
    }
    // cout<<temp->data;//this
    temp = reverseLL(temp);
    // cout<<temp->data;//and this should be different after reversing
    Node *temp2 = head;
    for (; temp != NULL;)
    {
        if (temp2->data == temp->data)
        {
            temp2 = temp2->next;
            temp = temp->next;
        }
        else
            return false;
    }
    return true;
}