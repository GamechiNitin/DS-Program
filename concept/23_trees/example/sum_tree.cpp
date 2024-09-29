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
    cout << "Enter the data for left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

pair<bool, int> sumTree(Node *root)
{
    if (root == NULL)
    {
        return make_pair(true, 0);
    }

    if (root->left == NULL && root->right == NULL)
    {
        return make_pair(true, root->data);
    }

    pair<bool, int> left = sumTree(root->left);
    pair<bool, int> right = sumTree(root->right);

    bool b1 = left.first;
    bool b2 = right.first;
    bool sum = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (b1 && b2 && sum)
    {
        return make_pair(true, root->data + left.second + right.second);
    }
    else
    {
        return make_pair(false, 0);
    }
}
int main()
{
    Node *root = NULL;
    // NO : 26 10 4 -1 -1 6 -1 -1 5 3 -1 -1 2 -1 -1
    // YES : 26 10 4 -1 -1 6 -1 -1 3 -1 3 -1 -1

    root = buildTree(root);
    cout << "Inorder : " << endl;
    inOrder(root);
    cout << endl;
    // Diameter
    cout << "Is the tree SUMTree? " << (sumTree(root).first ? "Yes" : "No") << endl;

    return 0;
}