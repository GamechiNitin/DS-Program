#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Creation and Initialization
    vector<int> v1;                // Empty vector
    vector<int> v2(10);            // Vector of size 10, with default-initialized values
    vector<int> v3(10, 5);         // Vector of size 10, with all values initialized to 5
    vector<int> v4 = {1, 2, 3, 4}; // Vector initialized with a list of values

    // Accessing Elements
    int value = v4[2];      // Access element with index 2
    int value = v4.at(2);   // Access element with index 2, with bounds checking
    int first = v4.front(); // Access the first element
    int last = v4.back();   // Access the last element

    // Modifying Elements
    v4[2] = 10;      // Modify element with index 2
    v4.at(2) = 10;   // Modify element with index 2 with bounds checking
    v4.push_back(6); // Add element to the end
    v4.pop_back();   // Remove the last element

    // Capacity and Size
    size_t size = v4.size();         // Get number of elements
    size_t capacity = v4.capacity(); // Get current capacity
    bool empty = v4.empty();         // Check if the vector is empty
    v4.reserve(20);                  // Reserve space for at least 20 elements
    v4.shrink_to_fit();              // Reduce capacity to fit the size

    // Resizing and Clearing
    v4.resize(15);    // Change the size to 15; new elements are default-initialized
    v4.resize(5, 10); // Resize to 5; new elements are initialized to 10
    v4.clear();       // Remove all elements

    // Iterators
    vector<int>::iterator it = v4.begin();         // Iterator to the beginning
    vector<int>::iterator end = v4.end();          // Iterator to the end
    vector<int>::const_iterator cit = v4.cbegin(); // Constant iterator to the beginning
    vector<int>::const_iterator cend = v4.cend();  // Constant iterator to the end

    for (it = v4.begin(); it != v4.end(); ++it)
    {
        std::cout << *it << " "; // Output elements
    }

    // Algorithms
    sort(v4.begin(), v4.end());               // Sort the vector
    reverse(v4.begin(), v4.end());            // Reverse the order of elements
    auto it = find(v4.begin(), v4.end(), 10); //
}