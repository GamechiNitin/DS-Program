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
    cout << "Enter the data: " << endl;

    int data;
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
vector<int> morrisTraversal(Node *root)
{
    vector<int> result;
    Node *current = root;

    while (current)
    {
        if (!current->left)
        {
            // No left child, visit the node and go right
            result.push_back(current->data);
            current = current->right;
        }
        else
        {
            // Find the inorder predecessor
            Node *predecessor = current->left;
            while (predecessor->right && predecessor->right != current)
            {
                predecessor = predecessor->right;
            }

            // Make current as right child of its inorder predecessor
            if (!predecessor->right)
            {
                predecessor->right = current; // Create a thread
                current = current->left;
            }
            else
            {
                // Revert the changes made to restore the original tree
                predecessor->right = nullptr;
                result.push_back(current->data); // Visit the node
                current = current->right;
            }
        }
    }
    return result;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // Example input format: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << endl
         << "Inorder : ";
    inOrder(root);
    cout << endl
         << "preOrder : ";
    preOrder(root);
    cout << endl
         << "postOrder : ";
    postOrder(root);

    cout << endl
         << "Inorder Morris Traversal : ";
    vector<int> ans = morrisTraversal(root);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

/*
Morris traversal is an efficient algorithm for tree traversal that uses a
threaded binary tree to achieve in-order traversal without using additional space for a stack or recursion.

Morris In-Order Traversal
Setup: Start at the root of the tree.
Traversal:
While the current node is not null:
If the current node has no left child, visit it (process its value) and move to the right child.
If the current node has a left child:
Find the rightmost node in the left subtree (the inorder predecessor).
If the right child of the predecessor is null, set it to point to the current node (create a thread) and move to the left child.
If the right child of the predecessor is already pointing to the current node, it means we've returned back, so:
Visit the current node.
Restore the right child of the predecessor to null (remove the thread) and move to the right child.
*/