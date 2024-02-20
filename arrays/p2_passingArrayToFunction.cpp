#include <iostream>
#include <iomanip>

void SizeOfArr(int num[]);
void SizeOfArr_2(int num[], int size);

int main(int argc, char* argv[])
{
    const int arr_size = 10;
    int numbers[arr_size];
    int size_numbers_arr = sizeof(numbers) / sizeof(int); 

    // Initializing the array elements
    for (int i = 0; i < size_numbers_arr; i++)
    {
        numbers[i] = i * 2;
    }

    // Printing the array
    std::cout << std::setw(15) << std::left << "Array Values:";
    for (int i = 0; i < size_numbers_arr; i++)
    {
        std::cout << std::setw(5) << numbers[i];
    }
    std::cout << std::endl;

    std::cout << "The size of array inside main is: " << sizeof(numbers) << std::endl;
    SizeOfArr(numbers);
    SizeOfArr_2(numbers, size_numbers_arr); 
    
    return EXIT_SUCCESS;
}

void SizeOfArr(int num[])
{
    std::cout << std::setw(15) << std::left << "Array Size (no size parameter): " << sizeof(num) << std::endl;
}

void SizeOfArr_2(int num[], int size)
{
    std::cout << std::setw(15) << std::left << "Array Size (with size parameter): " << sizeof(num) << std::endl;
}
