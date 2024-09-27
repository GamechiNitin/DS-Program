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

bool identiccalTree(Node *t1, Node *t2)
{
    if (t1 == NULL && t2 == NULL)
    {
        return true;
    }

    if ((t1 != NULL && t2 == NULL) || t1 == NULL && t2 != NULL)
    {
        return false;
    }

    bool left = identiccalTree(t1->left, t2->left);
    bool right = identiccalTree(t1->right, t2->right);
    bool value = t1->data == t2->data;

    return left && right && value;
}

int main()
{
    Node *root = NULL;
    Node *root2 = NULL;
    // T1 : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // T2 : 1 2 3 4 -1 -1 -1 -1 -1

    root = buildTree(root);
    root2 = buildTree(root2);
    cout << "Inorder : " << endl;
    inOrder(root);
    cout << endl;
    // Diameter
    cout << "Is the tree balanced? " << (identiccalTree(root, root) ? "Yes" : "No") << endl;
    cout << "Is the tree balanced? " << (identiccalTree(root, root2) ? "Yes" : "No") << endl;
    cout << "Is the tree balanced? " << (identiccalTree(root2, root2) ? "Yes" : "No") << endl;

    return 0;
}