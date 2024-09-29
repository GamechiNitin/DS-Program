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

vector<int> rightViewTraversal(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    map<int, int> nodes;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int levelSize = q.size(); // Number of nodes at the current level

        // Traverse nodes of the current level
        for (int i = 0; i < levelSize; ++i)
        {
            Node *frontNode = q.front();
            q.pop();

            // If it's the first node of this level, add it to the result
            if (i == 0)
            {
                result.push_back(frontNode->data);
            }
            // Enqueue left and right children
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
        }
    }
    return result;
}

void solve(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
        return;

    if (level == ans.size())
        ans.push_back(root->data);
    solve(root->right, ans, level + 1);
    solve(root->left, ans, level + 1);
}
vector<int> recursionRightView(Node *root)
{
    vector<int> result;

    solve(root, result, 0);
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
         << "Right view Traversal : ";
    vector<int> result2 = rightViewTraversal(root);
    for (int i : result2)
    {
        cout << i << " ";
    }

    cout << endl
         << "Right view Traversal Recursion: ";
    vector<int> result = recursionRightView(root);
    for (int i : result)
    {
        cout << i << " ";
    }

    /*
    Time & Space : O(n)
    */
    return 0;
}