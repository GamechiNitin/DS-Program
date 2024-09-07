#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {5, 2, 9, 1, 5, 6};

    std::cout << "Original vector: ";
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;

    std::sort(v.begin(), v.end());
    // std::reverse(v.begin(), v.end());

    std::cout << "Sorted vector: ";
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;

    v.push_back(7);
    std::cout << "After push_back(7): ";
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;

    v.pop_back();
    std::cout << "After pop_back(): ";
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;

    v.clear();
    std::cout << "After clear(): " << (v.empty() ? "Vector is empty" : "Vector is not empty") << std::endl;

    return 0;
}
