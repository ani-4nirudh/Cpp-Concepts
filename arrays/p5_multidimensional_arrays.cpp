#include <iostream>
#include <iomanip>

void print_arr_row_wise(int (*p)[4], int row, int col);
void print_arr_element(int **p, int row, int col);

int main()
{
    const int row = 3, col = 4;

    // Declaring a multi-dimensional array
    int a[row][col] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {3, 6, 9, 12}
    };

    // Creating pointer to an array of 4 elements
    int (*p_arr)[col] = a;

    std::cout << "The array using subscript notation to console output is: " << a << std::endl;

    // Creating a pointer to a pointer
    // int **p_2 = a[0][0];

    print_arr_row_wise(p_arr, row, col);
    // print_arr_element(&(**a), row, col);

    return 0;
}

void print_arr_row_wise(int (*p)[4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        std::cout << "The elements of row " << i + 1 << " are : ";
        for (int j = 0; j < col; j++)
        {
            std::cout << std::setw(5) << *(*(p + i) + j);
        }
        std::cout << std::endl;
    }
}

void print_arr_element(int **p, int row, int col)
{
    std::cout << "The element wise console output is: " << std::endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << std::setw(5) << *(*(p + i) + j);
        }
    }
}