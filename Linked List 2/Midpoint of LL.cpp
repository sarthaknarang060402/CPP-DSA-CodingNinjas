
Node *midPoint(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;

    Node *slow = head;
    Node *fast = head->next;

    for (; fast->next != NULL;)
    {
        slow = slow->next;
        if (fast->next->next == NULL)
            break;
        fast = fast->next->next;
    }
    return slow;
}