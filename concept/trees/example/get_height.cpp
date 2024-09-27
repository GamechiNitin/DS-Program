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
    cout << "Enter the Data : " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // ----------
    root = new Node(data);
    cout << "Enter the data for inserting in left of " << data << endl;

    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;

    root->right = buildTree(root->right);
    return root;
}

int getHeight(Node *node)
{
    int height;
    if (node == NULL)
    {
        return 0;
    }

    int left = getHeight(node->left);
    int right = getHeight(node->right);

    int ans = max(left, right) + 1;

    return ans;
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

            if (temp->left) // If there is a left child
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
int main()
{
    Node *root = NULL;
    // 2 -1 3 5 -1 -1 -1
    root = buildTree(root);

    cout << "Tree nodes in preorder: " << endl;
    levelOrderTraversal(root);

    cout << " Height : " << getHeight(root) << endl;
    return 0;
}