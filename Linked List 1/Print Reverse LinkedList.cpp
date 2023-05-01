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

void printReverse(Node *head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        cout << head->data << " ";
        return;
    }
    else
        printReverse(head->next);

    cout << head->data << " ";
    return;
}

// another way to do it
// void printReverse(Node *head)
// {
//     Node *temp=head;
//     int array[1000];
//     int i;
//     for(i=0;temp!=NULL;i++)
//     {
//         array[i]=temp->data;
//         temp=temp->next;
//     }
//     i--;
//     for(;i>=0;i--)
//     {
//         cout<<array[i]<<" ";
//     }
// }