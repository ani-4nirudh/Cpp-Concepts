#include <iostream>
#include <iomanip>

int AddUp(int num[][3], int rows, int cols);

int main(int argc, char* argv[])
{
    std::cout << "You entered the following arguments: " << std::endl;
    for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
    }

    const int rows = 3;
    const int cols = 3;
    int numbers[rows][cols];

    // Initializing the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            numbers[i][j] = i * j;
        }
    }

    // Printing the array
    std::cout << std::setw(5) << "2D-Array elements: " << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << std::setw(10) << numbers[i][j]; 
        }
        std::cout << std::endl;
    }

    std::cout << "The sum of array elements is: " << AddUp(numbers, rows, cols) << std::endl;
}

int AddUp(int num[][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += num[i][j];
        }
    } 

    return sum;
}