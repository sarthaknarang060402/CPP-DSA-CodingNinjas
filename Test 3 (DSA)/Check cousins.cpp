bool isSibling(BinaryTreeNode<int> *root, int p, int q)
{
    if (root == NULL)
        return 0;
    if (root->left != NULL && root->right != NULL)
    {
        if ((root->left->data == p && root->right->data == q) ||
            (root->left->data == q && root->right->data == p))
            return 1;
    }
    if (root->left != NULL)
        isSibling(root->left, p, q);
    if (root->right != NULL)
        isSibling(root->right, p, q);
}

int depth(BinaryTreeNode<int> *root, int node, int level)
{
    if (root == NULL)
        return 0;
    if (root->data == node)
        return level;
    int lev = depth(root->left, node, level + 1);
    if (lev != 0)
        return lev;

    return depth(root->right, node, level + 1);
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q)
{
    // Write your code here
    if ((depth(root, p, 1) == depth(root, q, 1)) && isSibling(root, p, q) == 0)
        return 1;
    else
        return 0;
}