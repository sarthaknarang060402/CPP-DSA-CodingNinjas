Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;
    Node *mergedstart = NULL;
    Node *mergeGo = NULL;
    if (head1->data <= head2->data)
    {
        mergedstart = head1;
        head1 = head1->next;
    }
    else
    {
        mergedstart = head2;
        head2 = head2->next;
    }
    mergeGo = mergedstart;

    for (; head1 != NULL && head2 != NULL; mergeGo = mergeGo->next)
    {
        if (head1->data <= head2->data)
        {
            mergeGo->next = head1;
            head1 = head1->next;
        }
        else
        {
            mergeGo->next = head2;
            head2 = head2->next;
        }
    }
    if (head1 == NULL)
        mergeGo->next = head2;
    else
        mergeGo->next = head1;
    return mergedstart;
}