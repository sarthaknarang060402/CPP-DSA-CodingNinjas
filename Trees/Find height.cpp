int getHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int height = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int childHeight = getHeight(root->children[i]);
        if (childHeight > height)
            height = childHeight;
    }
    return height + 1;
}