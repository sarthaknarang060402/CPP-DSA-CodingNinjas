void insertDuplicateNode(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    BinaryTreeNode<int> *rootcopy = new BinaryTreeNode<int>(root->data);

    rootcopy->left = root->left;
    root->left = rootcopy;

    insertDuplicateNode(rootcopy->left);
    insertDuplicateNode(root->right);
}