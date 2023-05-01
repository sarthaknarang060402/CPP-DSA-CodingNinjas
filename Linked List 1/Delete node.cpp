/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    Node *prev = head;
    for (int i = pos; i >= 0; i--)
    {
        if (temp == NULL)
            break;
        temp = temp->next;
    }
    if (pos == 0)
        return temp;
    for (int i = pos; i - 1 > 0; i--)
    {
        if (prev == NULL)
            return head;
        prev = prev->next;
    }
    prev->next = temp;
    return head;
}
