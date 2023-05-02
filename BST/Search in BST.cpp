bool searchInBST(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
        return 0;
    if (root->data == k)
        return 1;
    if (root->data > k)
        return searchInBST(root->left, k);
    else
        return searchInBST(root->right, k);
}