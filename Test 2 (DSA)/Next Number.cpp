

Node *NextLargeNumber(Node *head)
{

    if (head->next == NULL)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        return head;
    }
    Node *pn = NextLargeNumber(head->next);

    if (head->next->data == 0 && pn->data == 1)
    {
        if (head->data == 9)
        {
            head->data = 0;
            Node *x = new Node(1);

            x->next = head;
            head = x;
        }
        else
            head->data++;

        delete pn;
        return head;
    }

    else
    {
        return head;
    }
}
