#include <bits/stdc++.h>
pair<Node<int> *, Node<int> *> helper(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        pair<Node<int> *, Node<int> *> ans;
        ans.first = NULL;
        ans.second = NULL;
        return ans;
    }
    Node<int> *currentNode = new Node<int>(root->data);
    pair<Node<int> *, Node<int> *> leftAns = helper(root->left);
    pair<Node<int> *, Node<int> *> rightAns = helper(root->right);
    pair<Node<int> *, Node<int> *> ans;
    // conditons to make linked list
    if (leftAns.first != NULL && rightAns.first != NULL)
    {
        ans.first = leftAns.first;
        leftAns.second->next = currentNode;
        currentNode->next = rightAns.first;
        ans.second = rightAns.second;
    }
    else if (leftAns.first != NULL && rightAns.first == NULL)
    {
        ans.first = leftAns.first;
        leftAns.second->next = currentNode;
        currentNode->next = NULL;
        ans.second = currentNode;
    }
    else if (leftAns.first == NULL && rightAns.first != NULL)
    {
        ans.first = currentNode;
        currentNode->next = rightAns.first;
        ans.second = rightAns.second;
    }
    else // when both NULL
    {
        ans.first = currentNode;
        ans.second = currentNode;
    }
    return ans;
}
Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
    return helper(root).first;
}