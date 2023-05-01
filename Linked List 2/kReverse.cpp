class Pair
{
public:
    Node *head;
    Node *tail;
};
Pair reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLL(head->next);

    smallAns.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}
Node *kReverse(Node *head, int k)
{
    if (k == 0)
        return head;
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *tail = NULL;
    for (int i = k; i > 0 && temp != NULL; i--)
    {
        tail = temp;
        temp = temp->next;
    }
    tail->next = NULL;
    Pair revlist = reverseLL(head);
    temp = kReverse(temp, k);
    revlist.tail->next = temp;
    return revlist.head;
}