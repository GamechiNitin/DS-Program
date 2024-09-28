#include <iostream>
#include <queue>

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

void traverseLeft(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left)
        traverseLeft(root->left, ans);
    if (root->right)
        traverseLeft(root->right, ans);
}

void traverseLeaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void traverseRight(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }

    if (root->right)
        traverseRight(root->right, ans);
    else
        traverseRight(root->left, ans);
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }
    result.push_back(root->data);
    traverseLeft(root->left, result);
    traverseLeaf(root->left, result);
    traverseLeaf(root->right, result);
    traverseRight(root->right, result);
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

    cout << "Boundary Traversal : ";
    vector<int> result = boundaryTraversal(root);
    for (int i : result)
    {
        cout << i << " ";
    }

    /*
    Time & Space : O(n)
    */
    return 0;
}