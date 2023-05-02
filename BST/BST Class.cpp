class BST
{
    // Define the data members
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        // Implement the Constructor
        root = NULL;
    }
    ~BST()
    {
        delete root;
    }

private:
    void printHelper(BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return;
        cout << node->data << ":";
        if (node->left)
            cout << "L:" << node->left->data << ",";
        if (node->right)
            cout << "R:" << node->right->data;

        cout << endl;
        printHelper(node->left);
        printHelper(node->right);
    }

    BinaryTreeNode<int> *insertHelper(BinaryTreeNode<int> *node, int data)
    {
        if (node == NULL)
        {
            BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }
        if (node->data >= data)
            node->left = insertHelper(node->left, data);
        else
            node->right = insertHelper(node->right, data);

        return node;
    }

    bool searchHelper(BinaryTreeNode<int> *node, int data)
    {
        if (node == NULL)
            return 0;
        if (node->data == data)
            return 1;
        if (node->data > data)
            return searchHelper(node->left, data);
        else
            return searchHelper(node->right, data);
    }

    BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
            return NULL;
        if (data > node->data)
        {
            node->right = deleteData(data, node->right);
            return node;
        }
        else if (data < node->data)
        {
            node->left = deleteData(data, node->left);
            return node;
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int> *temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> *minNode = node->right;
                while (minNode->left != NULL)
                {
                    minNode = minNode->left;
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                node->right = deleteData(rightMin, node->right);
                return node;
            }
        }
    }

    /*----------------- Public Functions of BST -----------------*/
public:
    void remove(int data)
    {
        // Implement the remove() function
        root = deleteData(data, root);
    }

    void print()
    {
        // Implement the print() function
        printHelper(root);
    }

    void insert(int data)
    {
        // Implement the insert() function
        root = insertHelper(root, data);
    }

    bool search(int data)
    {
        // Implement the search() function
        return searchHelper(root, data);
    }
};