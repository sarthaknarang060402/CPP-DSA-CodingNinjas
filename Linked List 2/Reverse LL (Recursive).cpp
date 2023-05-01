Node *reverseLinkedListRec(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;
    Node *smallProblem = reverseLinkedListRec(head->next);
    Node *tail = head->next;

    tail->next = head;
    head->next = NULL;
    return smallProblem;
}