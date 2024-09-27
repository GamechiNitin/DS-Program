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

Node *buildTree(Node *node)
{
    cout << "Enter Root : " << endl;
    int data;
    cin >> data;
    node = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left of " << data << endl;
    node->left = buildTree(node->left);
    cout << "Enter the data for right of " << data << endl;
    node->right = buildTree(node->right);

    return node;
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

pair<int, int> diameterofTree(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterofTree(root->left);
    pair<int, int> right = diameterofTree(root->right);

    int d1 = left.first;
    int d2 = right.first;
    int height = left.second + right.second + 1;

    pair<int, int> answer;
    answer.first = max(d1, max(d2, height));
    answer.second = max(left.second, right.second) + 1;
    return answer;
}

int main()
{
    Node *node = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node = buildTree(node);
    cout << endl
         << "Inorder : ";
    inOrderTraversal(node);
    // Inorder : 7 3 11 1 17 5

    // Diameter
    cout << endl
         << "Diameter : " << diameterofTree(node).first << endl;

    return 0;
}