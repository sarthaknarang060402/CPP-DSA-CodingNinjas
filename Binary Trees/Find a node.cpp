bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return 0;
    if (root->data == x)
        return 1;
    else
    {
        bool lans = 0, rans = 0;
        if (root->left)
            lans = isNodePresent(root->left, x);
        if (root->right)
            rans = isNodePresent(root->right, x);
        return lans || rans;
    }
}