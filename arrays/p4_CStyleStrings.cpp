#include <iostream>

int main(int argc, char* argv[])
{
    // myString is a pointer to the first element of character array
    char* myString = "Hello, world :)";

    // someStrings is a list of pointers pointing to the first element of respective arrays
    char* someStrings[] = {"Hello", "Ani", "Singh"};
    
    // Prints only the first character of the string Hello
    std::cout << *myString << std::endl;

    for (int i = 0; i < 3; i++)
    {
        // the loop goes through the list of pointers. Each pointer points to another string and then, cout has guardrails to allow us to print the whole strings underneath. 
        std::cout << someStrings[i] << std::endl;
    }
    
    return EXIT_SUCCESS;
}