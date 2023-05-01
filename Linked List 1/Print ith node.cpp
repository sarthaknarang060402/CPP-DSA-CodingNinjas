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
int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    for (; temp != NULL; temp = temp->next)
    {
        len++;
    }
    return len;
}
void printIthNode(Node *head, int i)
{
    if (head == NULL)
        return;
    if (i > length(head))
        return;
    Node *temp = head;
    if (temp->next == NULL)
        return;
    for (; i != 0; temp = temp->next)
    {
        i--;
    }
    cout << temp->data;
}