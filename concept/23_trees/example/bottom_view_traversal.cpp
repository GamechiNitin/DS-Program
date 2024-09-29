#include <iostream>
#include <queue>
#include <map>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << "Enter root : " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter Right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    // NLR
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

vector<int> topViewTraversal(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    map<int, int> nodes;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int horizontalDistance = temp.second;

        // No condition => Top View
        nodes[horizontalDistance] = frontNode->data;

        if (frontNode->left)
            q.push(make_pair(frontNode->left, horizontalDistance - 1));

        if (frontNode->right)
            q.push(make_pair(frontNode->right, horizontalDistance + 1));
    }

    for (auto i : nodes)
    {
        result.push_back(i.second);
    }

    return result;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout << endl
         << "PreOrder : ";
    preOrder(root);

    cout << endl;

    cout << endl
         << "Top view Traversal : ";
    vector<int> result2 = topViewTraversal(root);
    for (int i : result2)
    {
        cout << i << " ";
    }

    /*
    Time & Space : O(n)
    */
    return 0;
}