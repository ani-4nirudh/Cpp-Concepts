/* This program allows user to access array elements using pointer notation and performing pointer arithmetic to calculate factorial. This approach avoids using subscripts. */

#include <iostream>

int factorial_arr(int *arr, int size);

int main(int argc, char *argv[])
{
    const int size_arr = 5;
    int num[size_arr] = {1, 2, 3, 4, 5};
    int factorial = factorial_arr(num, size_arr);

    std::cout << "The factorial of this array is: " << factorial << std::endl;
    
    return EXIT_SUCCESS;
}

int factorial_arr(int *arr, int size)
{
    int fact = 1;
    for (int i = 0; i < size; i++)
    {
        fact *= *(arr + i);
    }

    return fact;
}
