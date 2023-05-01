
Node *reverseLinkedList(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;

    Node *Curr = head;
    Node *Next = Curr->next;
    Node *prev = NULL;
    for (; Next != NULL;)
    {
        Next = Curr->next;
        Curr->next = prev;
        prev = Curr;
        Curr = Next;
    }
    return prev;
}