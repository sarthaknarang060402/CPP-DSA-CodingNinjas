void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":L:";
        if (front->left)
        {
            cout << front->left->data << ",R:";
            pendingNodes.push(front->left);
        }
        else
            cout << "-1,R:";
        if (front->right)
        {
            cout << front->right->data << endl;
            pendingNodes.push(front->right);
        }
        else
            cout << "-1" << endl;
    }
}