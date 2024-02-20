#include <iostream>

void print_some(std::string name);

int main(int argc, char* argv[])
{
    std::string username;
    std::cout << "Enter your name: ";
    std::cin >> username;
    print_some(username);
    
    return 0;
}