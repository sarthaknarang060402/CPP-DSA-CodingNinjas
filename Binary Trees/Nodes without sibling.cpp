void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
    {
        if (root->right == NULL)
            cout << root->left->data << " ";
        else
            cout << root->right->data << " ";
    }
    printNodesWithoutSibling(root->left);
    printNodesWithoutSibling(root->right);
    return;
}