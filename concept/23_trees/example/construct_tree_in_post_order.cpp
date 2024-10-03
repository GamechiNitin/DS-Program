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

void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    // NLR
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
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

Node *solve(int in[], int post[], int &index, int inOrderStart, int inOrderEnd, int N, map<int, int> &nodetoIndex)
{
    if (index < 0 || inOrderStart > inOrderEnd)
        return NULL;

    int element = post[index--];
    Node *root = new Node(element);

    int position = nodetoIndex[element];
    // int position = findPosition(in, element, N);

    // IMP Position
    root->right = solve(in, post, index, position + 1, inOrderEnd, N, nodetoIndex);
    root->left = solve(in, post, index, inOrderStart, position - 1, N, nodetoIndex);

    return root;
}

int main()
{
    // Construct Tree using InOrder and POST order
    int N = 8;
    int inOrder[] = {4, 8, 2, 5, 1, 6, 3, 7};
    int postOrder[] = {8, 4, 5, 2, 6, 7, 3, 1};
    int postOrderIndex = N - 1;

    //
    map<int, int> nodetoIndex;
    createMapping(inOrder, nodetoIndex, N);
    Node *node = solve(inOrder, postOrder, postOrderIndex, 0, N - 1, N, nodetoIndex);
    cout << "Pre Order : ";
    preOrderTraversal(node);
    /*
    1 2 4 8 5 3 6 7
    Time : O(nlogn)
    Space : O(n)
    */
    return 0;
}