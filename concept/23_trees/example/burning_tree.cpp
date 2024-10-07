#include <iostream>
#include <map>
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
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new Node(data);
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

Node *createParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
{
    // Create Mapping
    //

    Node *result = NULL;
    queue<Node *> q;
    q.push(root);
    nodeToParent[root] = NULL;

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front->data == target)
        {
            result = front;
        }

        if (front->left)
        {
            nodeToParent[front->left] = front;
            q.push(front->left);
        }

        if (front->right)
        {
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return result;
}

int burnTree(Node *node, map<Node *, Node *> &nodeToParent)
{
    map<Node *, bool> visited;
    queue<Node *> q;
    int ans = 0;

    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        bool flag = false;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            // Processing
            Node *front = q.front();
            q.pop();

            if (front->left && !visited[front->left])
            {
                flag = true;
                q.push(front->left);
                visited[front->left] = true;
            }

            if (front->right && !visited[front->right])
            {
                flag = true;

                q.push(front->right);
                visited[front->right] = true;
            }

            if (nodeToParent[front] && !visited[nodeToParent[front]])
            {
                flag = true;

                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = true;
            }
        }
        if (flag)
        {
            ans++;
        }
    }

    return ans;
}

int minTimeToBurn(Node *root, int target)
{
    // Step : 1 - Create node to parent mapping
    // Step : 2 - Find Target Node in tree
    // Step : 3 Burn the tree in min time
    map<Node *, Node *> nodeToParent;
    Node *targetNode = createParentMapping(root, target, nodeToParent);
    return burnTree(targetNode, nodeToParent);
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    inOrderTraversal(root);
    // 1 2 4 -1 -1 5 7 -1 -1 8 -1 -1 3 -1 6 -1 9 -1 10 -1 -1

    cout << endl
         << "Burn Time : Traget 8 - " << minTimeToBurn(root, 8) << endl;
    cout << endl
         << "Burn Time : Target 6 - " << minTimeToBurn(root, 6) << endl;
    return 0;
}