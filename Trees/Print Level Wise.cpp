#include <queue>
void printLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
        return;

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data;
            if (i != front->children.size() - 1)
                cout << ",";
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
}