#include <iostream>
#include <queue>
#include <unordered_map>

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
// -------------Solution 1----------

void solve(Node *root, int k, int &count, vector<int> path)
{
    if (root == NULL)
        return;
    path.push_back(root->data);
    solve(root->left, k, count, path);
    solve(root->right, k, count, path);

    int size = path.size();
    int sum = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        sum += path[i];
        if (sum == k)
        {
            count++;
        }
    }
    path.pop_back();
}
int kSumPath(Node *root, int k)
{
    vector<int> path;
    int count = 0;
    solve(root, k, count, path);
    return count;
}

// -------------Solution 2----------

void findKSumPaths(Node *node, int k, int currentSum, unordered_map<int, int> &prefixSumMap, int &count)
{
    if (!node)
        return;

    // Update the current sum
    currentSum += node->data;

    // Check if there's a prefix sum that equals currentSum - k
    if (currentSum == k)
    {
        count++;
    }
    if (prefixSumMap.find(currentSum - k) != prefixSumMap.end())
    {
        count += prefixSumMap[currentSum - k];
    }

    // Add the current sum to the prefix map
    prefixSumMap[currentSum]++;

    // Recur for left and right children
    findKSumPaths(node->left, k, currentSum, prefixSumMap, count);
    findKSumPaths(node->right, k, currentSum, prefixSumMap, count);

    // Remove the current sum from the map (backtrack)
    prefixSumMap[currentSum]--;
}

int kSumPathSol2(Node *root, int k)
{
    unordered_map<int, int> prefixSumMap;
    int count = 0;
    findKSumPaths(root, k, 0, prefixSumMap, count);
    return count;
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    cout << endl
         << "INOrder : ";
    inOrder(root);

    cout << endl;

    cout << endl
         << "K Sum Path : " << kSumPath(root, 5) << endl;

    cout << endl
         << "K Sum Path 2 : " << kSumPathSol2(root, 5) << endl;

    /*
   Sol : 1 Time & Space : O(n2), O(n)
   Sol : 2 Time & Space : O(n)
    */
    return 0;
}