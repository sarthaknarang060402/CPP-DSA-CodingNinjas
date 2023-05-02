#include <bits/stdc++.h>
vector<int> *getPath(BinaryTreeNode<int> *root, int data)
{
    if (root == NULL)
        return NULL;
    vector<int> *ans = new vector<int>();
    if (root->data == data)
    {
        ans->push_back(root->data);
        return ans;
    }
    vector<int> *leftAns = getPath(root->left, data);
    if (leftAns != NULL)
    {
        leftAns->push_back(root->data);
        return leftAns;
    }
    vector<int> *rightAns = getPath(root->right, data);
    if (rightAns != NULL)
    {
        rightAns->push_back(root->data);
        return rightAns;
    }
    else
        return NULL;
}