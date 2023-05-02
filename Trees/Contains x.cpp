bool isPresent(TreeNode<int> *root, int x)
{
    if (root->data == x)
        return true;
    bool flag = false;
    for (int i = 0; i < root->children.size(); i++)
    {
        flag = isPresent(root->children[i], x);
        if (flag)
            break;
    }
    return flag;
}