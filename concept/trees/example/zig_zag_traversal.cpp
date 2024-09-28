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
vector<int> zigZagTraversal(Node *root)
{
    vector<int> result; // Vector to store the result
    if (root == NULL)
    {
        return result; // Return empty vector if tree is empty
    }

    queue<Node *> q;         // Queue to facilitate level order traversal
    q.push(root);            // Start with the root node
    bool lrDirection = true; // Direction flag: true for left-to-right

    while (!q.empty())
    {
        int qsize = q.size();    // Number of nodes at current level
        vector<int> temp(qsize); // Temporary vector to store current level's values

        // Process nodes at the current level
        for (int i = 0; i < qsize; i++)
        {
            Node *frontNode = q.front(); // Get the front node
            q.pop();                     // Remove the front node from the queue

            // Insert node data in the correct index based on direction
            // index is level size not whole tree
            int index = lrDirection ? i : qsize - i - 1;
            temp[index] = frontNode->data;

            // Enqueue left and right children for the next level
            if (frontNode->left)
                q.push(frontNode->left);
            if (frontNode->right)
                q.push(frontNode->right);
        }

        lrDirection = !lrDirection; // Toggle the direction for the next level

        // Append the current level's values to the result
        for (auto i : temp)
        {
            result.push_back(i);
        }
    }
    return result; // Return the final zigzag order
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

    cout << "Zig Zag : ";
    vector<int> result = zigZagTraversal(root);
    for (int i : result)
    {
        cout << i << " ";
    }

    /*
    Time & Space : O(n)
    */
    return 0;
}