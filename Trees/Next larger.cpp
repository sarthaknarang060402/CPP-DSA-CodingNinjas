#include <bits/stdc++.h>
TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    if (root == NULL)
        return NULL;
    TreeNode<int> *current = NULL;
    if (root->data > x)
        current = root;
    for (int i = 0; i < root->children.size(); i++)
    {
        TreeNode<int> *mychild = getNextLargerElement(root->children[i], x);
        if (current == NULL)
            current = mychild;
        else if (current != NULL && mychild->data < current->data)
            current = mychild;
    }
    if (current == NULL)
        return NULL;
    if (current->data > x)
        return current;
}