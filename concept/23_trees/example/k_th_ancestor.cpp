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

Node *solve(Node *root, int &k, int node)
{
    if (root == NULL)
    {
        return NULL;
    }

    // If the current node is the target node, return it
    if (root->data == node)
    {
        return root;
    }

    // Recur for left and right subtrees
    Node *left = solve(root->left, k, node);
    Node *right = solve(root->right, k, node);

    // If the target is found in the left subtree
    if (left != NULL && right == NULL)
    {
        k--; // Decrement k
        // If k reaches 0, return the current node as the k-th ancestor
        if (k <= 0)
        {
            k = INT_MAX; // Reset k to prevent further false positives
            return root;
        }
        return left; // Continue to search in the left subtree
    }

    // If the target is found in the right subtree
    if (left == NULL && right != NULL)
    {
        k--; // Decrement k
        // If k reaches 0, return the current node as the k-th ancestor
        if (k <= 0)
        {
            k = INT_MAX; // Reset k to prevent further false positives
            return root;
        }
        return right; // Continue to search in the right subtree
    }

    // If the target is not found in either subtree
    return NULL;
}

// Function to get the k-th ancestor of a specified node
int kTHAncestor(Node *root, int k, int node)
{
    Node *ans = solve(root, k, node); // Find the ancestor
    // Return -1 if no ancestor found or if the node is itself the target
    return (ans == NULL || ans->data == node) ? -1 : ans->data;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // Example input: 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout << endl
         << "In-Order Traversal: ";
    inOrder(root); // Perform in-order traversal

    // Find and print the k-th ancestor of a specified node
    cout << endl
         << "k-th Ancestor: " << kTHAncestor(root, 2, 4);

    /*
    Time & Space Complexity: O(n)
    where n is the number of nodes in the tree.
    */
    return 0;
}