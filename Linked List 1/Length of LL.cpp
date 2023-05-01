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
    int length = 0;
    Node *temp = head;
    for (; temp != NULL; temp = temp->next)
    {
        length++;
    }
    return length;
}
