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

int findNode(Node *head, int n)
{
    if (head == NULL)
        return -1;
    Node *temp = head;
    int index = 0;
    for (; temp->next != NULL; index++)
    {
        if (temp->data == n)
            return index;
        else
            temp = temp->next;
    }
    if (temp->data == n)
        return index;
    else
        return -1;
}