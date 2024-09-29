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

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void solve(Node *root, int sum, int &maxSum, int length, int &maxLen)
{
    if (root == NULL)
    {
        if (length > maxLen)
        {
            maxLen = length;
            maxSum = sum;
        }
        else if (length == maxLen)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum = sum + root->data;
    solve(root->left, sum, maxSum, length + 1, maxLen);
    solve(root->right, sum, maxSum, length + 1, maxLen);
}

Node *lowestCommonAncestor(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftAns = lowestCommonAncestor(root->left, n1, n2);
    Node *rightAns = lowestCommonAncestor(root->right, n1, n2);

    if (leftAns != NULL && rightAns != NULL)
    {
        return root;
    }
    else if (leftAns != NULL && rightAns == NULL)
    {

        return leftAns;
    }
    else if (leftAns == NULL && rightAns != NULL)
    {
        return rightAns;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout << endl
         << "INOrder : ";
    inOrder(root);

    cout << endl;

    cout << endl
         << "Lowest Common Ancestor : ";
    Node *result = lowestCommonAncestor(root, 4, 7);
    cout << result->data << " ";

    /*
    Time & Space : O(n)
    */
    return 0;
}