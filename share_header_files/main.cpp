#include <iostream>
#include "print_some.hpp"

int main(int argc, char* argv[])
{
    std::string username;
    std::cout << "Enter your name: ";
    std::cin >> username;

    print_some(username);
    
    return EXIT_SUCCESS;
}