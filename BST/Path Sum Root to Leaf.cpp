#include <bits/stdc++.h>
void rootToLeafPaths(BinaryTreeNode<int> *root, int k, string path)
{
    if (root == NULL)
    {
        return;
    }
    string newnode = to_string(root->data);
    path = path + newnode + " ";
    k -= root->data;
    rootToLeafPaths(root->left, k, path);
    rootToLeafPaths(root->right, k, path);

    if (root->left == NULL && root->right == NULL && k == 0)
        cout << path << endl;
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
    rootToLeafPaths(root, k, "");
}