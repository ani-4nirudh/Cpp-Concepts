/* This program illustrates the use of initializers for constructors. There are two ways as illustrated below.*/

#include <iostream>

class PostMalone
{
    protected:
        int OneHitWonders;
        int NumberRecordings;
    public:
        // Initialiser list INSIDE class code block
        // PostMalone() : OneHitWonders(5), NumberRecordings(40) {} 
        PostMalone(); 
};

PostMalone::PostMalone() : OneHitWonders(5), NumberRecordings(50) // Initializer list OUTSIDE the class definition
{
    std::cout << "Hi, I am an instance of Post Malone" << std::endl;
    std::cout << "I have had " << OneHitWonders << " hits." << std::endl;
    std::cout << "I have had " << NumberRecordings << " records." << std::endl;
}

int main(int argc, char* argv[])
{
    PostMalone Posty;
    
    return EXIT_SUCCESS;
}