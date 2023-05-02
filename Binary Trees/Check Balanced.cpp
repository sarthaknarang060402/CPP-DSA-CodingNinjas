int height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
bool isBalanced(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 1;
    if (!(isBalanced(root->left) && isBalanced(root->right)))
        return 0;
    if ((height(root->left) - height(root->right)) <= 1 && (height(root->left) - height(root->right)) >= -1)
        return 1;
    else
        return 0;
}