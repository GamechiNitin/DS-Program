#include <iostream>
#include <vector>
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

    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);

    cout << "Enter the data of left subtree : " << data;
    root->left = buildTree(root->left);
    cout << "Enter the data of right subtree : " << data;
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
void inOrder(Node *root)
{
    if (root == NULL)
        return;

    // LNR
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
        return;

    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void flatten(Node *root)
{
    Node *current = root;
    while (current != NULL)
    {
        if (current->left)
        {
            Node *pred = current->left;
            while (pred->right)
                pred = pred->right;

            pred->right = current->right;
            current->right = current->left;
            current->left = NULL;
        }
        current = current->right;
    }
}

void printFlattened(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->right; // Follow the right pointers
    }
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // Example input format: 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1

    cout << endl
         << "preOrder : ";
    preOrder(root);

    flatten(root);
    cout << "Flattened tree (linked list): ";
    printFlattened(root);
    cout << endl;
    return 0;

    /*
    Time O(n) | Space O(1)
    */
}
