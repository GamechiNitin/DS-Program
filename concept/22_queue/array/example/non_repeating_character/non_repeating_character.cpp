#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

string nRC(string A)
{
    // Map to count occurrences of each character
    unordered_map<char, int> count;

    // Queue to maintain the order of characters
    queue<char> q;

    // Result string to store non-repeating characters or '#'
    string ans = "";

    for (char ch : A)
    {
        // Increment the count for the current character
        count[ch]++;
        // Add the current character to the queue
        q.push(ch);

        // Process the queue to find the first non-repeating character
        while (!q.empty())
        {
            // If the character at the front of the queue is repeating
            if (count[q.front()] > 1)
            {
                // Remove it from the queue
                q.pop();
            }
            else
            {
                // If a non-repeating character is found, add it to the result
                ans.push_back(q.front());
                break;
            }
        }

        // If the queue is empty, append '#' to the result
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}

int main()
{
    string s = "aabc";

    string result = nRC(s);
    cout << result << endl; // Output: "aabc"

    return 0;
}
