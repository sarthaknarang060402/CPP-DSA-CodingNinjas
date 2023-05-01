class Stack
{
    // Define the data members
    Node *head;
    int size;

public:
    Stack()
    {
        // Implement the Constructor
        head = NULL;
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

    void push(int element)
    {
        // Implement the push() function
        Node *temp = new Node(element);
        if (isEmpty())
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    int pop()
    {
        // Implement the pop() function
        if (isEmpty())
        {
            return -1;
        }
        int answer = head->data;
        head = head->next;
        size--;
        return answer;
    }

    int top()
    {
        // Implement the top() function
        if (isEmpty())
        {
            return -1;
        }
        int answer = head->data;
        return answer;
    }
};