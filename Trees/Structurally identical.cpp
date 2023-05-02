bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    bool ans = 0;
    if (root1->data == root2->data)
        ans = 1;
    if ((root1 == NULL and root2 != NULL) or (root1 != NULL and root2 == NULL))
    {
        return 0;
    }
    if (root1->children.size() != root2->children.size())
    {
        return 0;
    }

    for (int i = 0; i < root1->children.size() && i < root2->children.size(); i++)
    {
        ans = areIdentical(root1->children[i], root2->children[i]);
        if (ans == 0)
            break;
    }
    return ans;
}
