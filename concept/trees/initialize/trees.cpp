#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Node class representing each node in the tree
class Node
{
public:
    int data;    // Value of the node
    Node *left;  // Pointer to the left child
    Node *right; // Pointer to the right child

    // Constructor to initialize a node with a value
    Node(int value)
    {
        this->data = value; // Set node value
        this->left = NULL;  // Initialize left child as NULL
        this->right = NULL; // Initialize right child as NULL
    }
};

// Function to build a tree from user input
Node *buildTree(Node *root)
{
    cout << "Enter the data: " << endl; // Prompt for node data
    int data;
    cin >> data; // Read the data from user input

    // If the user enters -1, it indicates no node should be created
    if (data == -1)
    {
        return NULL; // Return NULL for no node
    }

    // Create a new node with the given data
    root = new Node(data);

    // Recursively build the left subtree
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    // Recursively build the right subtree
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root; // Return the created node
}

// Function for level order traversal of the tree
void levelOrderTraversal(Node *root)
{
    queue<Node *> q; // Queue to hold nodes for level order traversal
    q.push(root);    // Start with the root node
    q.push(NULL);    // Use NULL as a marker for end of level

    while (!q.empty())
    {
        Node *temp = q.front(); // Get the front node
        q.pop();                // Remove the front node from the queue

        if (temp != NULL) // If the node is not NULL
        {
            cout << temp->data << " "; // Print the node's data
            if (temp->left)            // If there is a left child
            {
                q.push(temp->left); // Add left child to the queue
            }
            if (temp->right) // If there is a right child
            {
                q.push(temp->right); // Add right child to the queue
            }
        }
        else // If the node is NULL
        {
            cout << endl;   // Print a new line to separate levels
            if (!q.empty()) // If there are more nodes in the queue
            {
                q.push(NULL); // Add NULL as a marker for the next level
            }
        }
    }
}
void reverseLevelOrderTraversal(Node *root)
{
    if (root == NULL)
        return; // Check if the tree is empty

    queue<Node *> q; // Queue for level order traversal
    stack<int> s;    // Stack to reverse the order

    q.push(root); // Start with the root

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        s.push(temp->data); // Push the data onto the stack

        // Push right first so left is processed first in stack
        if (temp->right)
        {
            q.push(temp->right);
        }
        if (temp->left)
        {
            q.push(temp->left);
        }
    }

    // Pop from stack to display in reverse order
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl; // New line after traversal
}

int main()
{
    Node *root = NULL;      // Initialize the root of the tree
    root = buildTree(root); // Build the tree from user input

    // Example input format: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    reverseLevelOrderTraversal(root);
    return 0;
}
