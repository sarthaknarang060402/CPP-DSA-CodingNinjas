class Queue
{

    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        // Implement the Constructor
        head = NULL;
        tail = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return size == 0;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        Node *temp = new Node(data);
        if (isEmpty())
        {
            head = temp;
            tail = temp;
            size++;
            return;
        }
        else
            tail->next = temp;
        tail = temp;
        size++;
        return;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (isEmpty())
            return -1;
        int ans = head->data;
        head = head->next;
        // delete []head;
        size--;
        return ans;
    }

    int front()
    {
        // Implement the front() function
        if (isEmpty())
            return -1;
        return head->data;
    }
};