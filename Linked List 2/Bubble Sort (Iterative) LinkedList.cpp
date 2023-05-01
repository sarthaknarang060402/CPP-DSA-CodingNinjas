using namespace std;
int len(Node *head)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return i;
}
Node *bubbleSort(Node *head)
{
    if (head == NULL)
        return head;
    int n = len(head) - 1;

    while (n--)

    {
        Node *prev = NULL;
        Node *cur = head;
        while (cur->next != NULL)
        {
            if (cur->data >= cur->next->data)
            {

                if (prev == NULL)
                {
                    // first node
                    Node *nxt = cur->next;
                    cur->next = nxt->next;
                    nxt->next = cur;
                    prev = nxt;
                    head = prev;
                }

                else
                {

                    Node *nxt = cur->next;
                    prev->next = nxt;
                    cur->next = nxt->next;
                    nxt->next = cur;
                    prev = nxt;
                }
            }
            else
            {

                prev = cur;
                cur = cur->next;
            }
        }
    }

    return head;
}