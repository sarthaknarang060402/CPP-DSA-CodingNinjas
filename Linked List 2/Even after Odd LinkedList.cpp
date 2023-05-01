Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *even_head = NULL;
    Node *even_tail = NULL;
    Node *odd_head = NULL;
    Node *odd_tail = NULL;

    if (temp->data % 2 != 0) // odd
    {
        odd_head = temp;
        odd_tail = temp;
    }
    else
    {
        even_head = temp;
        even_tail = temp;
    }
    temp = temp->next;

    for (; temp != NULL; temp = temp->next)
    {
        if (temp->data % 2 != 0) // odd
        {
            if (odd_head == NULL)
            {
                odd_head = temp;
                odd_tail = temp;
            }
            else
            {
                odd_head->next = temp;
                odd_head = temp;
            }
        }
        else
        {
            if (even_head == NULL)
            {
                even_head = temp;
                even_tail = temp;
            }
            else
            {
                even_head->next = temp;
                even_head = temp;
            }
        }
    }
    if (even_head != NULL)
        even_head->next = NULL;
    if (odd_head != NULL)
        odd_head->next = even_tail;
    if (odd_tail != NULL)
        return odd_tail;
    else
        return even_tail;
}