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

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    // NLR
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int findPosition(int in[], int e, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (in[i] == e)
        {
            return i;
        }
    }
    return -1;
}

void createMapping(int in[], map<int, int> &nodetoIndex, int N)
{
    for (int i = 0; i < N; i++)
    {
        nodetoIndex[in[i]] = i;
    }
}

Node *solve(int in[], int pre[], int &index, int inOrderStart, int inOrderEnd, int N, map<int, int> &nodetoIndex)
{
    if (index >= N || inOrderStart > inOrderEnd)
        return NULL;

    int element = pre[index++];
    Node *root = new Node(element);

    int position = nodetoIndex[element];
    // int position = findPosition(in, element, N);

    root->left = solve(in, pre, index, inOrderStart, position - 1, N, nodetoIndex);
    root->right = solve(in, pre, index, position + 1, inOrderEnd, N, nodetoIndex);

    return root;
}

int main()
{
    // Construct Tree using InOrder and PreOrder
    int N = 6;
    int inOrder[] = {3, 1, 4, 0, 5, 2};
    int preOrder[] = {0, 1, 3, 4, 2, 5};
    int preOrderIndex = 0;

    //
    map<int, int> nodetoIndex;
    createMapping(inOrder, nodetoIndex, N);
    Node *node = solve(inOrder, preOrder, preOrderIndex, 0, N - 1, N, nodetoIndex);
    cout << "Post Order : ";
    postOrder(node);
    /*
    Time & Space : O(n)
    */
    return 0;
}