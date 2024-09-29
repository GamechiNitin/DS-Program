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

pair<int, int> solve(Node *root)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }

    // Recursively solve for left and right subtrees
    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);

    pair<int, int> result;

    // The first element is the sum including the current node
    result.first = root->data + left.second + right.second;

    // The second element is the maximum sum excluding the current node
    result.second = max(left.first, left.second) + max(right.first, right.second);

    return result;
}

// Function to get the k-th ancestor of a specified node
int maxAdjacentNodeSum(Node *root)
{
    pair<int, int> ans = solve(root);
    return max(ans.first, ans.second);
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // Example input: 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout << endl
         << "In-Order Traversal: ";
    inOrder(root); // Perform in-order traversal

    // Find and print the maximum sum of non-adjacent nodes
    cout << endl
         << "Max Sum of Adjacent Nodes: " << maxAdjacentNodeSum(root);

    /*
    Time Complexity: O(n)
    Space Complexity: O(h)
    where n is the number of nodes in the tree, and h is the height of the tree due to recursion stack.
    */
    return 0;
}