#include <iostream>

int main()
{
    // A jagged array, or ragged array, is an array of arrays
    //  where the inner arrays can have different lengths

    int numRows = 3; // Number of rows in the jagged array

    // Step 1: Allocate memory for an array of pointers (each pointer is a row)
    int **jaggedArray = new int *[numRows];

    // Step 2: Allocate memory for each row with different sizes
    int rowSizes[] = {3, 5, 2}; // Different sizes for each row

    for (int i = 0; i < numRows; ++i)
    {
        jaggedArray[i] = new int[rowSizes[i]]; // Allocate memory for each row

        // Initialize the row
        for (int j = 0; j < rowSizes[i]; ++j)
        {
            jaggedArray[i][j] = i * 10 + j; // Example initialization
        }
    }

    // Print the jagged array
    for (int i = 0; i < numRows; ++i)
    {
        for (int j = 0; j < rowSizes[i]; ++j)
        {
            std::cout << jaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Step 3: Deallocate memory
    for (int i = 0; i < numRows; ++i)
    {
        delete[] jaggedArray[i]; // Delete each row
    }
    delete[] jaggedArray; // Delete the array of pointers

    return 0;
}
