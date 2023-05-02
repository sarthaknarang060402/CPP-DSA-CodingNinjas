TreeNode<int> *removeLeafNodes(TreeNode<int> *root)
{
    // Write your code here
    if (root == NULL)
        return NULL;
    if (root->numChildren() == 0)
    {
        delete root;
        return NULL;
    }

    for (int i = 0; i < root->numChildren(); i++)
    {
        TreeNode<int> *child = root->getChild(i);
        if (child->numChildren() == 0)
        { // if leaf then delete that node
            int j = i;
            for (; j < root->numChildren() - 1; j++)
            {
                root->setChild(j, root->getChild(j + 1));
            }
            root->removeChild(j);
            i--;
        }
    }
    for (int i = 0; i < root->numChildren(); i++)
    {
        TreeNode<int> *temp = removeLeafNodes(root->getChild(i));
        root->setChild(i, temp);
    }
    return root;
}