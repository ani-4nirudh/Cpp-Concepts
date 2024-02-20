#include <iostream>

int SumOfArray(int arr[], int size);

int main(int argc, char* argv[])
{
    int numbers[10];
    int size_of_array = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < size_of_array; i++)
    {
        numbers[i] = i * 2;
    }

    std::cout << "Sum of elements inside the array is: " << SumOfArray(numbers, size_of_array) << std::endl;
    
    return EXIT_SUCCESS;
}

int SumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}