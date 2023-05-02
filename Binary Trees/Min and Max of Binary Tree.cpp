#include <bits/stdc++.h>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    pair<int, int> p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    if (root == NULL)
        return p;
    pair<int, int> leftAns = getMinAndMax(root->left);
    pair<int, int> rightAns = getMinAndMax(root->right);
    p.second = max(root->data, max(rightAns.second, leftAns.second));
    p.first = min(root->data, min(rightAns.first, leftAns.first));
    return p;
}