#include <iostream>

class Falafel
{
    protected:
        float Weight;
        float Price;

    public:
        Falafel(){} // Default constructor explicitly mentioned
        Falafel(int AWeight, int APrice);
};

Falafel::Falafel(int AWeight, int APrice)
{
    Weight = AWeight;
    Price = APrice;
    std::cout << "I am not a defualt constructor" << std::endl;
    std::cout << "Weight : " << Weight << std::endl;
    std::cout << "Price : " << Price << std::endl;
}

int main(int argc, char* argv[])
{
    Falafel Rewe;
    Falafel Edeka(300, 2.49);
    
    return EXIT_SUCCESS;
}