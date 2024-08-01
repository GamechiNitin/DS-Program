/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively.
Both these arrays are sorted in non-decreasing order.
You have to find the intersection of these two arrays.

Intersection of 2 arrays is an array that consists of all the common elements occurring in both arrays.

Note :
A. The length of each array is greater than zero.
B. Both the arrays are sorted in increase order.
C. The output should be in the order of elements that occur in the original arrays.
D. If there is no intersection present then return an empty array.

Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :

1 2 2 2 4
2 2 3 3

Sample Output 1 :
2 2

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int> &n, vector<int> &m)
{

    int i = 0;
    int j = 0;
    vector<int> answer;

    while (i < n.size() && j < m.size())
    {
        // Check n = m
        if (n[i] == m[j])
        {
            answer.push_back(n[i]);
            i++;
            j++;
        }

        else if (n[i] < m[j])
        {
            // n<m for increasing then no need to check remaing m
            i++;
        }
        else
        {
            j++;
        }
    }

    return answer;
}
int main()
{

    vector<int> input = {
        1,
        2,
        2,
        2,
        3,
        4};

    vector<int> input2 = {2, 2, 3, 3};

    vector<int> vx = findIntersection(input, input2);

    for (int i = 0; i < vx.size(); i++)
    {
        cout << vx[i] << " ";
    }

    return 0;
}
