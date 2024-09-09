#include <iostream>

int main()
{
    int rows = 3; // Number of rows
    int cols = 4; // Number of columns

    // Step 1: Allocate memory for an array of pointers (each pointer is a row)
    int **array = new int *[rows];

    // Step 2: Allocate memory for each row (each row is a 1D array)
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    // Optionally, you can initialize the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = i * cols + j; // Just an example initialization
        }
    }

    // Print the array to verify
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Step 3: Deallocate memory
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i]; // Delete each row
    }
    delete[] array; // Delete the array of pointers

    return 0;
}
