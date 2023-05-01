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

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    for (; temp != NULL;)
    {
        if (temp->next == NULL)
            break;
        if (temp->data == temp->next->data)
            temp->next = temp->next->next;
        else
            temp = temp->next;
    }
    return head;
}