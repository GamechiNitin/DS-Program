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
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

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

pair<bool, int> balancedTree(Node *root)
{
    if (root == NULL)
    {
        return make_pair(true, 0);
    }

    pair<bool, int> left = balancedTree(root->left);
    pair<bool, int> right = balancedTree(root->right);

    bool b1 = left.first;
    bool b2 = right.first;
    bool difference = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    if (b1 && b2 && difference)
    {
        ans.first = true;
    }
    else
    {

        ans.first = false;
    }
    ans.second = max(left.second, right.second) + 1;
    return ans;
}
int main()
{
    Node *root = NULL;
    // YES : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // NO : 1 2 3 4 -1 -1 -1 -1 -1

    root = buildTree(root);
    cout << "Inorder : " << endl;
    inOrder(root);
    cout << endl;
    // Diameter
    cout << "Is the tree balanced? " << (balancedTree(root).first ? "Yes" : "No") << endl;

    return 0;
}